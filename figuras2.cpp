#include <iostream>
#include <math.h>
#include <iostream>

using namespace std;

int main ()
{
    int base = 0;
    int altura = 0;
    int tipo = 0;
    int area = 0;


    cout <<"Calculo de area de figuras geometricas\n" <<endl;
    cout <<"Triangulo-1\nCuadrado-2\n" <<endl;
    cout <<"Escribe el numero del tipo de figura de la que quierres saber su area: \n" <<endl;
    cin >>tipo;


    if (tipo == 2)


        cout <<"La formula para el area del cuadrado es base*altura" <<endl;
        cout <<"LLena los parametros;" <<endl;
        cout <<"base: " <<endl;
        cin >>base;
        cout <<"Altura: " <<endl;
        cin >>altura;
        area = base*altura;
        cout <<"El area del cuadrado es: \n";
        cout <<area;


    if (tipo == 1)
        cout <<"La formula para el area del triangulo es base*altura/2"<<endl;
        cout <<"LLena los parametros;" <<endl;
        cout <<"base: " <<endl;
        cin >>base;
        cout <<"Altura: " <<endl;
        cin >>altura;
        area = base*altura/2;
        cout <<"El area del triangulo es: ";
        cout <<area;
}
