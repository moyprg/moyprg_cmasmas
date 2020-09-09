//Udemy Progamación ATS
//Ejemplo Estructura básica 2

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	
	char nombre[20];
	int edad;
	
}persona1;


int main(){
	
	cout<<"Nombre: ";
	cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona1.edad;
	
	cout<<"\nImprimir datos."<<endl;
	cout<<"Nombre de persona: "<<persona1.nombre<<endl;
	cout<<"Edad de persona: "<<persona1.edad<<endl;
	
	
	getch();
	return 0;
}
