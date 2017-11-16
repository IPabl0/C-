/*EJERCICIO

Escribe un programa que lea de la
entrada estandar el precio de un
producto y muestre en la slaida
estandar el precio del producto al
aplicarle el IVA
*/
#include <iostream>

using namespace std;

int main (){
int precio;

cout<<"Ingrese el precio neto del producto: $"; cin>>precio;
cout<<"\nPrecio Neto: $"<<precio;
cout<<"\nIVA: $"<<precio*0.19;
cout<<"\nPrecio bruto: $"<<precio*1.19<<endl;




return 0;
}
