/*Realice un programa que calcule valor de la funcion
para los valores "x" e "y"
la funcion la encuentras dentro de 
la carpeta ejercicio 11
*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float x, y, resultado=0;

	cout<<"F(x)(y)= (raiz x)/(y^2-1)";

	cout<<"Ingrese valor de X: "; cin>>x;
	cout<<"\nIngrese valor de Y: "; cin>>y;

	resultado = (sqrt(x)) / (pow(y,2)-1);


	cout<<"\nEl resultado de la funcion es: "<<resultado;



    return 0;
}
