/*Escribe un fragmento de codigo que haga un 
intercambio en el valor de las variables
ej:

x = 1
y = 2

x= 2
y= 1 */
#include <iostream>

using namespace std;

int main (){
float a, b, swap;

cout<<"Ingrese el primer valor: "; cin>>a;
cout<<"\nIngrese el segundo valor: "; cin>>b;

cout<<"\nvalor A: "<<a;
cout<<"\nvalor B: "<<b;

swap = a;
a = b;
b = swap;

cout<<"\nvalor A: "<<a;
cout<<"\nvalor B: "<<b;



    return 0;
}
