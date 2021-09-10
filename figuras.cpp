#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

main ()
{
	float lado, base, altura, radio, area;
	float lado_cuadrado, area_cuadrado;
	float area_triangulo, altura_triangulo;
        char op;

printf("Calcular area de las figuras circulo, trinagulo, cuadrado "); 
     
     printf("\n 1.Cuadrado:  ");
     printf("\n 2.Triangulo:  ");
     printf("\n 3.Circulo:   ");
     printf("\n 6.Salir");
     printf("\n Escoja una opcion:  ");
     scanf("%c",&op);

switch(op)
     {
     	case '1':
     		printf("\n Cuadrado");
     		printf("\n Ingrese el valor del lado: ");
     		scanf("%f",&lado_cuadrado);
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
