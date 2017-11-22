/*
leer de la entrada estándar un carácter 
e indique en la salida estándar si el 
carácter es una vocal minúscula o no.
*/

#include <iostream>

using namespace std;

int main (){
int edad;

cout<<"Ingrese su edad: ";cin>>edad;

if (edad >= 18 && edad <= 25){
cout<<"pertenece al rango de edad de [18-25]";
}
    return 0;
}
