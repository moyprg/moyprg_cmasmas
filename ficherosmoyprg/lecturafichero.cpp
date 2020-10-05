//Udemy Progamación ATS
//Ejemplo ficheros lectura

#include<iostream>
#include<conio.h>
#include<stdlib.h>
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
	string texto;
	
	archivo.open("programacion.txt",ios::in); //abrimos el archivo en modo lectura
	//archivo.open("d:\\prueba\\progamacionC.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	while(!archivo.eof()){//mientras o sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close(); //cerramos el programa
	
}
