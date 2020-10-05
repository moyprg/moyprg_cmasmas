//Udemy Progamación ATS
//Ejemplo Punteros estructura

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[30];
	int edad;
	
}persona,*punteropersona=&persona;

void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	
	pedirDatos();
	mostrarDatos(punteropersona);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(punteropersona->nombre,30,'\n');
	cout<<"Digite su edad: ";
	cin>>punteropersona->edad;
	
}

void mostrarDatos(Persona *punteropersona){
	cout<<"\nSu nombre es: "<<punteropersona->nombre<<endl;
	cout<<"Su edad es: "<<punteropersona->edad<<endl;
	
}

