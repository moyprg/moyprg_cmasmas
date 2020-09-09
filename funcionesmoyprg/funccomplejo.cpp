//Udemy Progamación ATS
//Ejemplo Funcion suma de complejos

#include<iostream>
#include<conio.h>

using namespace std;

struct Complejo{
	float real,imaginario;
}z1,z2;


void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo);



int main(){
	
	pedirDatos();
	
	Complejo x=suma(z1,z2);
	muestra(x);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el primer numero: "<<endl;
	cout<<"Real: ";
	cin>>z1.real;
	cout<<"Imaginaro: ";
	cin>>z1.imaginario;
	
	cout<<"Digite el segundo numero: "<<endl;
	cout<<"Real: ";
	cin>>z2.real;
	cout<<"Imaginario: ";
	cin>>z2.imaginario;
		
}

Complejo suma(Complejo z1, Complejo z2){
	z1.real+=z2.real;
	z1.imaginario+=z2.imaginario;
	
	return z1;
	
}

void muestra(Complejo x){
	cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginario<<endl;
	
	}
