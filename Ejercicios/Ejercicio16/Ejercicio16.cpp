/*
Leer 1 entero determinar
si es par o impar
*/

#include <iostream>

using namespace std;

int main (){
int numero1;

cout<<"Leer numero: "; cin>>numero1;

if(numero1 == 0){
	cout<<"El numero es 0";
}else{
	if((numero1%2)==0){
		cout<<"Es par";
	}else{
		cout<<"no es par";	
	}		
}

    return 0;
}
