/*La clasificacion final de un alumno es la media ponderada de 3 notas:
La nota de practicas que cuenta un 30% del total, la nota teorica que cuenta un
60% y La nota de participacion que cuenta un 10%, Escriba un programa
que lea de la entrada standar las tres notas de un alumno
y escriba en la salida estandar su nota final*/
#include <iostream>

using namespace std;

int main (){
float a, b, c, d, notaFinal;

cout<<"Ingrese Nota de practicas (30%): "; cin>>a;
cout<<"\nIngrese Nota teorica (60%): "; cin>>b;
cout<<"\nIngrese Nota de participacion (10%): "; cin>>c;


cout<<"\nNota Practica: "<<a;
cout<<"\nNota Teorica: "<<b;
cout<<"\nNota Participacion: "<<c;



notaFinal = (a*0.3) + (b*0.6) + (c*0.1); 




cout<<"\nvalor de la nota final: "<<notaFinal;



    return 0;
}
