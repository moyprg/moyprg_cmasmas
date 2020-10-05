//Udemy Progamación ATS
//Ejemplo archivos

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>

using namespace std;

void escribir();

struct Registro{
	char nombre[20];
	char apellido[20];
	
};

int main(){
	
	escribir();
	
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
