/*Calcular hipotenusa
lerr desde la entrada estandar
los catetos del traingulo rectangulo
y calcular su hipotenusa
*/

/*NOTA: Considera que el teorema de pitagoras 
no es viable para todos los problemas procesados por 
computador por un tema de variables, para numero muy grandes
dara error */
#include <iostream>
#include <math.h>

using namespace std;

int main (){
float a, b, c;

cout<<"Ingrese Cateto 1 : "; cin>>a;
cout<<"\nIngrese Cateto2 : "; cin>>b;



cout<<"\nNota Cateto1: "<<a;
cout<<"\nNota Cateto2: "<<b;


c= pow(a,2) + pow(b,2);

cout<<"\nLa hipotenusa es: "<<pow(c,0.5);



    return 0;
}
