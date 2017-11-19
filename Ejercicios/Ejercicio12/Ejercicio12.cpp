/*Escriba un programa que calcule
las soluciones de una ecuacion de 2do grado
de la forma ax^2+bx+c=0, teniendo enn
cuenta la imagen que encontraras dentro de 
la carpeta ejercicio 12
*/

#include <iostream>
#include <math.h>

using namespace std;

int main (){
	float a, b, c, resultado=0;

	cout<<"x= (-b + sqrt(pow(b,2) - (4*a*c) ))/(2*a)"<<endl;
	cout<<"x2= (-b - sqrt(pow(b,2) - (4*a*c) ))/(2*a)"<<endl;
	
	cout<<"\nIngrese valor de a: "; cin>>a;
	cout<<"\nIngrese valor de b: "; cin>>b;
	cout<<"\nIngrese valor de c: "; cin>>c;
	
	

	resultado = (-b + ( sqrt( pow(b,2) - (4*a*c) ) ) ) / (2*a);
	cout<<"\nEl resultado de x1: "<<resultado;
	
	resultado = (-b - ( sqrt( pow(b,2) - (4*a*c) ) ) ) / (2*a);
	cout<<"\nEl resultado de x2: "<<resultado;



    return 0;
}
