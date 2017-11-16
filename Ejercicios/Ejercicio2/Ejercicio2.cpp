/*Haz un programa que pida los datos a un usuario por entrada
estandar:

sexo: tipo caracter
edad: tipo entero
altura: tipo real

Luego mostrar por la salida estandar */

/*Luego ingresa datos erroneos y observa lo que sucede
por ejemplo:

Cuando se espera un entero ingresa un caracter */

#include <iostream>

using namespace std;

int main (){

char sexo[10];
int edad;
float altura;

cout<<"Ingrese sexo: ";cin>>sexo;
cout<<"\nIngrese edad: ";cin>>edad;
cout<<"\nIngrese altura: ";cin>>altura;

cout<<"\nSu sexo es: "<<sexo;
cout<<"\nSu edad es: "<<edad;
cout<<"\nSe altura es: "<<altura;

    return 0;
}
