//Udemy Progamación ATS
//Ejemplo ficheros frases

#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

void escribirFrase();

int main(){
	
	escribirFrase();
	
	getch();
	return 0;
	
}

void escribirFrase(){
	ofstream archivo;
	string nombreArchivo,frase;
	char rpt;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out); //abriendo archivo
	
	if(archivo.fail()){
		cout<<"No se puedo abrir el archivo."<<endl;
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,frase);
		archivo<<frase<<endl;
		
		cout<<"Desea escribir otra frase? (s/n): ";
		cin>>rpt;
		
	}while((rpt=='s')||(rpt=='S'));
	
	archivo.close();//cerrando el archivo
	
}
