/*
Leer 3 numeros y determinar
cual es mayor
*/

#include <iostream>

using namespace std;

int main (){
int numero1, numero2, numero3;

cout<<"Digite el primer numero: "; cin>>numero1;
cout<<"Digite el segundo numero: "; cin>>numero2;
cout<<"Digite el tercer numero: "; cin>>numero3;

if(numero1 == numero2 && numero1 == numero3){
	cout<<"Los numeros son iguales";
}else{

	if(numero1>numero2){
		if(numero1 > numero3){
			cout<<"El numero 1 es mayor";
		}
	}else{
		if(numero2>numero3){
			cout<<"numero 2 es mayor";
		}else{
			cout<<"numero 3 es mayor";
		}
	}
}

    return 0;
}
