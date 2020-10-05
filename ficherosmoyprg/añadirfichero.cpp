//Udemy Progamación ATS
//Ejemplo ficheros añadir

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

void aniadir();

int main(){
	
	aniadir();
	
	getch();
	return 0;
}

void aniadir(){
	ofstream archivo;
	string texto;
	
	archivo.open("frases.txt",ios::app); //abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	cout<<"Digite el texto que desea añadir: ";
	getline(cin,texto);
	
	archivo<<texto<<endl;
	
	archivo.close(); //cerramos archivo
	
	
	
}
