/*Leer la nota final de 4 alumnos
y calcular su promedio*/
#include <iostream>

using namespace std;

int main (){
float a, b, c, d, suma;

cout<<"Ingrese el primera nota final: "; cin>>a;
cout<<"\nIngrese el segunda nota final: "; cin>>b;
cout<<"\nIngrese el tercera nota final: "; cin>>c;
cout<<"\nIngrese el cuarta nota final: "; cin>>d;

cout<<"\nNota Alumno1: "<<a;
cout<<"\nNota Alumno2: "<<b;
cout<<"\nNota Alumno3: "<<c;
cout<<"\nNota Alumno4: "<<d;


suma = a+b+c+d;




cout<<"\nvalor de la media: "<<suma/4;



    return 0;
}
