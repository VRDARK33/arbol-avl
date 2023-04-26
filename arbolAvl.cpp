
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "arbolAvl.h"
using namespace std;

//crear una funcion menu que permita al usuario elegir entre las opciones:
//1. insertar un nodo
//2. ver arbol

int main(){
    int opcion;
    int dato;
    AVL arbol = NULL;
    do{
        cout << "\n\t.:MENU:.\n";
        cout << "1. Insertar un nuevo nodo\n";
        cout << "2. Mostrar el arbol completo\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;
        
        switch(opcion){
            case 1: cout << "\nDigite un numero: ";
                    cin >> dato;
                    insertar(arbol, dato);
                    break;
            case 2: cout << "\nMostrando el arbol completo:\n\n";
                    verArbol(arbol, 0);
                    break;
        }
        system("pause");
        system("cls");
    }while(opcion != 3);
    
    return 0;
}


