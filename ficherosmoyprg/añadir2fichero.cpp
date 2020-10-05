//Udemy Progamación ATS
//Ejemplo ficheros añadir


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
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
	string nombreArchivo, texto;
	char rpt;
	
	cout<<"Digite el nombre o la ubicacion: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::app);//abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo."<<endl;
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite otra fase: ";
		getline(cin,texto);
		
		archivo<<texto<<endl;
		
		cout<<"Desea agregar otra frase? (s/n): "<<endl;
		cin>>rpt;
		
	}while((rpt=='s')||(rpt=='S'));
	
	archivo.close();
	
}
