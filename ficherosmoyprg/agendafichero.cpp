//Udemy Progamación ATS
//Ejemplo ficheros agenda


#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void menu();
void crearContacto();
void agregarContacto();
void visualizarContacto();

struct Datos{
	string nombre, apellido, telefono;
	
}datos;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout<<"\t.:Menu:.\n"<<endl;
		cout<<"1. Crear(nombre, apellidos, telefono)"<<endl;
		cout<<"2. Agregar mas contactos (nombre, apellidos, telefono)"<<endl;
		cout<<"3. Visualizar contactos existentes."<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Opcion: "<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1:
				crearContacto();
				cout<<"\n";
				system("pause");
				break;
			case 2:
				agregarContacto();
				cout<<"\n";
				system("pause");
				break;
			case 3:
				visualizarContacto();
				cout<<"\n";
				system("pause");
				break;		
			
		}
		system("cls");
		
		
	}while(opcion!=4);
	
}

void crearContacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("Agenda telefonica.txt",ios::out); //abrimos el archivo en modo escritura
	
	if(archivo.fail()){
		cout<<"No se pudo crear archivo.";
		exit(1);
	}
	
	archivo<<"\tAgenda Telefonica"<<endl;
	
	do{
		fflush(stdin);
		cout<<"Digite el nombre: ";
		getline(cin,datos.nombre);
		cout<<"Digite el apellido: "<<endl;
		getline(cin,datos.apellido);
		cout<<"Digite su telefono: "<<endl;
		getline(cin,datos.telefono);
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea agregar otro contacto (s/n): ";
		cin>>rpt;
		
			
	}while((rpt=='s')||(rpt=='S'));
	
	archivo.close();
}

void agregarContacto(){
	ofstream archivo;
	char rpt;
	
	archivo.open("Agenda Telefonica.txt",ios::app); //abrimos el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite el nombre: ";
		getline(cin,datos.nombre);
		cout<<"Digite su apellido: ";
		getline(cin,datos.apellido);
		cout<<"Digite su telefono: ";
		getline(cin,datos.telefono);
		
		archivo<<"\nNombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellido<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl;
		
		cout<<"Desea agregar otro contacto (s/n): ";
		cin>>rpt;
		
	}while(rpt=='S'||rpt=='s');
	
	archivo.close();//cerramos el archivo
	
}

void visualizarContacto(){
	ifstream archivo;
	string texto;
	
	archivo.open("Agenda Telefonica.txt",ios::in);//Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	while(!archivo.eof()){//mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();//Cerramos el archivo
	
}


