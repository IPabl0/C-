/*Escribe la expresion1 matematica que encontraras 
en la carpeta expresiones como expresion en c++*/
#include <iostream>

using namespace std;

int main (){
float a, b, c, d, resultado = 0;

cout<<"Ingrese el primer valor: "; cin>>a;
cout<<"\nIngrese el segundo valor: "; cin>>b;
cout<<"\nIngrese el tercer valor: "; cin>>c;
cout<<"\nIngrese el cuarto valor: "; cin>>d;

cout<<"La expresion matematica a realizar es (a+b)/(c+d)"<<endl;
resultado = (a+b)/(c+d);

//cout.precision(3);
//Indicamos que queremos 3 decimales redondeando el 3 por lo que aveces mostrara 2 decimales
cout<<"El resultado es: "<<resultado;


    return 0;
}
