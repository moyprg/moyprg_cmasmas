//Udemy Progamación ATS
//Ejemplo ficheros

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

void escribir();

int main(){
	
	escribir();
	
	getch();
	return 0;
}

void escribir(){
	ofstream archivo;
	string nombreArchivo,frase;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out); //abriendo el archivo, si no existe se crea  //direccion
	//archivo.open("d://prueba//ejemplo.txt",ios::out);//direccion donde se crea el archivo de texto
	
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo.";
		exit(1);
	}
	
	cout<<"\nDigite el texto del archivo:";
	getline(cin,frase);
	
	archivo<<frase;
	
	
	archivo.close(); //cerrar el archivo
}
