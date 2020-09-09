//Udemy Progamación ATS
//Ejemplo Estructura básica

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	
	char nombre[20];
	int edad;
	
}
persona1={"Jose",20},
persona2={"Pedro",25};


int main(){
	
	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"Nombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;
	
	getch();
	return 0;
}
