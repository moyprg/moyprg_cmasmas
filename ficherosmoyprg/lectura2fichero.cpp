//Udemy Progamación ATS
//Ejemplo ficheros lectura 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void lectura();

int main(){
	
	lectura();
	
	getch();
	return 0;
}

void lectura(){
	ifstream archivo;
	string nombreArchivo, texto;
	
	cout<<"Digite el nombre o ubicacion del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::in); //abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se puedo abrir el archivo."<<endl;
		exit(1);
	}
	
	while(!archivo.eof()){//mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
}
