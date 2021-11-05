#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <unistd.h>

using namespace std;

int main()
{
    int ivalor = 20;
    int icontador = 0;
    int i = 0;
    int dsleep = 0;
    

cout << "----------------------- Programa Hilo -----------------------" << endl;    
 for (i = 1; i <= ivalor; i++) {
          icontador += i;
          dsleep = 1-(1/i);
          cout << "Ciclo for i = " << icontador << "sleep = " << dsleep << endl;
          sleep(dsleep);
}

cout << "====> Llamado a otro programa " << endl;
system("./bin/areas_figuras");

cout << "----------------------- Fin Programa ------------------------" << endl;

	 
    return 0;
}
