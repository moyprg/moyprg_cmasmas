//Udemy Progamación ATS
//Ejemplo archivos leer

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;

void escribir();
void leer();

struct Registro{
	char nombre[20];
	char apellido[20];
	
};

int main(){
	
	escribir();
	leer();
	
	getch();
	return 0;
	
}

void escribir(){
	ofstream archivoB;
	
	archivoB.open("Pruebaarch.dat",ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo abrir el archivo."<<endl;
		exit(1);
	}
	
	Registro persona;
	
	cout<<"Pidiendo datos: "<<endl;
	cout<<"Digite un nombre: ";
	cin.getline(persona.nombre,20,'\n');
	cout<<"Digite el apellido: ";
	cin.getline(persona.apellido,20,'\n');
	
	//escribimos los datos en mi archivo binario
	archivoB.write((char *)&persona,sizeof(Registro));
	
	archivoB.close();
	
}

void leer(){
	ifstream archivoB;
	
	archivoB.open("Pruebaarch.dat",ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	Registro persona;
	
	archivoB.read((char *)&persona,sizeof(Registro));
	
	cout<<"\n\nMostrar los datos leidos."<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Apellido: "<<persona.apellido<<endl;
	
	archivoB.close();
	
	
}

