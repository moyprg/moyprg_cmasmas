//Udemy Progamación ATS
//Ejemplo archivos func posicionamiento

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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
	
	archivo.open("posicion.txt",ios::out);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	archivo<<"Hola que tal?";
	
	//posiciona el cursor en N
	archivo.seekp(5);
	
	archivo<<"como estas?";
	cout<<"Posicion actual: "<<archivo.tellp()<<endl;
	
	archivo.close();
	
}
