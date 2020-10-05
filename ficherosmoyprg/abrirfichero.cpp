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
	
	archivo.open("prueba.txt",ios::out); //abriendo el archivo, si no existe se crea  //direccion
	
	if(archivo.fail()){
		cout<<"no se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"Hola que tal? este es una archivo desde c++.\n";
	
	archivo.close(); //cerrar el archivo
}
