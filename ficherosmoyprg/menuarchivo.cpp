//Udemy Progamación ATS
//Ejemplo archivos pulsaciones

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void menu();
void escribirPulsacion();
void aniadirPulsacion();
void mostrarPulsacion();


struct Registro{
	float hora;
	int pulsaciones;
	
};

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout<<"\t.:Menu:."<<endl;
		cout<<"1. Comenzar a digitar las pulsaciones."<<endl;
		cout<<"2. Añadir mas pulsaciones."<<endl;
		cout<<"3. Mostrar las pulsaciones registradas."<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Digite la opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				escribirPulsacion();
				break;
			case 2:
				aniadirPulsacion();
				break;
			case 3:
				mostrarPulsacion();
				break;
			case 4:
				break;
			default:
				cout<<"Se equivoco de opcion de menu."<<endl;		
							
		}
		
		system("pause");
		system("cls");
		
		
	}while(opcion!=4);
	
	
}

void escribirPulsacion(){
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::out | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se puede crear el archivo"<<endl;
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nDigite la hora: ";
	cin>>pulso.hora;
	cout<<"Digite la cantidad de pulsaciones: ";
	cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso,sizeof(Registro));
	
	archivoB.close();
}


void aniadirPulsacion(){
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::app | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se puede crear el archivo"<<endl;
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nDigite la hora: ";
	cin>>pulso.hora;
	cout<<"Digite la cantidad de pulsaciones: ";
	cin>>pulso.pulsaciones;
	
	archivoB.write((char *)&pulso,sizeof(Registro));
	
	archivoB.close();
}

void mostrarPulsacion(){
	ifstream archivoB;
	
	archivoB.open("pulsaciones.dat",ios::in | ios::binary);
	
	if(archivoB.fail()){
		cout<<"No se puede crear el archivo"<<endl;
		exit(1);
	}
	
	Registro pulso;
	
	cout<<"\nPulsaciones registradas"<<endl;
	while(!archivoB.eof()){//mientras no sea el final del archivo
		archivoB.read((char *)&pulso,sizeof(Registro));
				
		if(!archivoB.eof()){
			cout<<"Hora: "<<pulso.hora<<endl;
			cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
		}		
		
	}
	
	archivoB.close();
	
}
