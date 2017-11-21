/*
Leer 2 numeros y determinar
cual es mayor
*/

#include <iostream>

using namespace std;

int main (){
int numero1, numero2;

cout<<"Digite el primer numero: "; cin>>numero1;
cout<<"Digite el segundo numero: "; cin>>numero2;

if(numero1==numero2){
	cout<<"mbos numeros son iguales";
}else{
	//En caso contrario
	if(numero1>numero2){
		cout<<"El numero 1 es mayor";
	}else{
		cout<<"El numero 2 es mayor";
	}
}

    return 0;
}
