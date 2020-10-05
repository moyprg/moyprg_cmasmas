//Udemy Progamaci�n ATS
//Ejemplo Colas mostrar


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Cliente{
	char nombre[30];
	char clave[10];
	int edad;
};

struct Nodo{
	Cliente c;
	Nodo *siguiente;
	
};

//Prototipos
void cargar_clientes(Cliente &);
void insertarCola(Nodo *&, Nodo *&, Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, Cliente &);

int main(){
	
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	Cliente c;
	char rpt;
	
	do{
		cargar_clientes(c); //cargar datos del cliente
		insertarCola(frente,fin,c); //agregar nuevo cleinte
		
		cout<<"\nDesea agregar nuevo cliente(s/n):";
		cin>>rpt;
	}while(rpt=='S'||rpt=='s');
	
	cout<<"\n\n===Carga exitosa===\n\n";
	
	cout<<"\tClientes agregados\n\n";
	while(frente!=NULL){
		suprimirCola(frente,fin,c);
		
		cout<<"Nombre: "<<c.nombre<<endl;
		cout<<"Clave: "<<c.clave<<endl;
		cout<<"Edad: "<<c.edad<<endl;
		cout<<"\n";
		
	}
	
	getch();
	return 0;
}

void cargar_clientes(Cliente &c){
	fflush(stdin);
	cout<<"\tAgregar nuevo cliente\n";
	cout<<"Nombre: ";
	cin.getline(c.nombre,30,'\n');
	cout<<"Clave: ";
	cin.getline(c.clave,10,'\n');
	cout<<"Edad: ";
	cin>>c.edad;
	cout<<"\n";
	
}

//Funcion agregar
void insertarCola(Nodo *&frente, Nodo *&fin, Cliente c){
	Nodo *nuevo_nodo=new Nodo();
	
	nuevo_nodo->c=c;
	nuevo_nodo->siguiente=NULL;
	
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin->siguiente=nuevo_nodo;
	}
	
	fin=nuevo_nodo;
}

//Funcion determinar

bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true:false;
}

//Funcion para sacar elementos
void suprimirCola(Nodo *&frente, Nodo *&fin, Cliente &c){
	c=frente->c;
	
	Nodo *aux=frente;
	
	if(frente==fin){
		frente=NULL;
		fin==NULL;
	}else{
		frente=frente->siguiente;
	}
	
	delete aux;
}

