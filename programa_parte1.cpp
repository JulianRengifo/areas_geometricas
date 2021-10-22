#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int base = 0;
    int altura = 0;
    int tipo = 0;
    int area = 0;
    int radio = 0;
    int opcion;
    double raiz =0;
    bool repetir = true;

printf("-------------------------------------------------------------\n");
printf("Programa para calcular el area de figuras geometricas      \n");
printf("Realizado por Julian Edaurdo Rengifo Cortes                \n");
printf("9/sep 2021. Universidad Cooperativa de Colombia            \n");
printf("21/octubre 2021. Se agrega la opcion raiz cuadrada         \n");
printf("Rename                                                     \n");
printf("\n");
    
    
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Opcion Cuadrado 1" << endl;
        cout << "2. Opcion Triangulo 2" << endl;
        cout << "3. Opcion Circulo 3" << endl;
        cout << "4. Opcion Raiz cuadrada" <<endl;
        cout << "0. SALIR" << endl;
        
        cout << "\n Opcion por defecto = 4 \n";
        opcion = 4;
        
        switch (opcion) {
            case 1:
                
            cout <<" \n La formula para el area del cuadrado es base*altura" <<endl;
            cout <<" \n Ingrese el valor;" <<endl;
            base = 4;
            altura = 4;
            cout << "/n";
            area = base*altura;
            cout <<"El area del cuadrado es: ";
            cout <<area;                
                
                break;
                
            case 2:
                cout <<" \n La formula para el area del triangulo es base*altura/2"<<endl;
                cout <<" \n Ingrese el valor;" <<endl;
                base = 4;
                altura = 4;
                cout << "/n";
                area = base*altura/2;
                cout <<"El area del triangulo es: ";
                cout <<area;                
                 
                break;
                
            case 3:
                cout <<" \n La formula para el area del circulo es PI*radio^2"<<endl;
                cout <<" \n Ingrese el valor;" <<endl;
                radio = 4;
                cout << "/n";
                area = (radio*radio)*3.1416;
                cout <<"El area del circulo es: ";
                cout <<area;               
                
                break;
            
            case 4:
                double a,b;
                cout << "ingrese un numero: ";
                cout << "\n";
                b= sqrt (25);
                cout << "La raiz cuadrada de 25 es: " <<b;
                cout << "\n";
                break;
            case 0:
            	repetir = false;
            	break;
        }        

}
