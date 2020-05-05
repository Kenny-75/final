#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main() {

    char cadena[50];
    int b;
    int longitud=0;
    cout<<"use codigo ascii y simplemente lo inverti cuando lo muestro"<<endl;
    cout<<"ingrese palabra"<<endl;
    gets(cadena);
    longitud = strlen(cadena);
    for(int a=longitud;a>=0;a--)
    {
        int b=cadena[a];
        cout<<b<<".";
    }
    return 0;
}
