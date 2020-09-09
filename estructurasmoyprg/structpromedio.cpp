//Udemy Progamación ATS
//Ejemplo Estructuras promedio

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
	
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumno1;


int main(){
	
	float prome;
	
	cout<<"Nombre: ";
	cin.getline(alumno1.nombre,20,'\n');
	cout<<"Sexo: ";
	cin.getline(alumno1.sexo,20,'\n');
	cout<<"Edad: ";
	cin>>alumno1.edad;
	
	cout<<"\nNotas del alumno.\n";
	cout<<"Nota 1: ";
	cin>>alumno1.prom.nota1;
	cout<<"Nota 2: ";
	cin>>alumno1.prom.nota2;
	cout<<"Nota 3:";
	cin>>alumno1.prom.nota3;
	
	prome=(alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;
	
	cout<<"\nDatos del alumno: \n";
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio: "<<prome<<endl;
	
	
	getch();
	return 0;
	
}
