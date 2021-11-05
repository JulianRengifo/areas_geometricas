#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main() {

int ivalor = 0;
int icontador = 0;
int i= 0;

cout << "Ingrese el valor para calcular la suma./n";

cin >> ivalor;

cout << "Usted ingreso:" << ivalor << endl;

for (i = 1; i <= ivalor; i++) {
icontador+=i;
}

cout << "El resultado es: " << icontador << endl;


return 0;

}
