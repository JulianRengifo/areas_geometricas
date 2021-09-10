#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main ()
{
	float lado, base, altura, radio, area;
	float lado_cuadrado, area_cuadrado;
	float area_triangulo, altura_triangulo;
        float area_circulo;
        
        

cout << "Calcular area de las figuras circulo, trinagulo, cuadrado ";
     
     cout << "\n 1.Cuadrado:  ";
     cout << "\n 2.Triangulo:  ";
     cout << "\n 3.Circulo:   ";
     cout << "\n 6.Salir";
     cout << "\n Escoja una opcion: ";
     cin >> opcion;

switch(op)
     {
     	case '1':
     		printf("\n Cuadrado");
     		printf("\n Ingrese el valor del lado: ");
     		cin"%f",&lado_cuadrado);
     		area_cuadrado=pow(lado_cuadrado,2);
     		printf("\n El area del cuadrado es:  %f",+area_cuadrado);
     		break;
 
     	case '2':
     	    printf("\n Triangulo");
     	    printf("\n Ingrese el valor de la base:  ");
     	    scanf("%f",&base);
     	    printf("\n Ingrese el valor de la altura:  ");
     	    scanf("%f",&altura_triangulo);
     	    area_triangulo=(base*altura_triangulo)/2;
     	    printf("\n El area del triangulo es: %f",+area_triangulo);
     	    break;

        case '4':
     	    printf("\n Circulo:");
     	    printf("\n Ingrese el valor del radio: ");
     	    scanf("%f",&radio_circulo);
 
     	    area_circulo= (radio*radio)*PI;
 
     	    printf("\n El area del circuli es: %f",+ area_circulo);
     	    break;

        case '6':
        break;
}
}
