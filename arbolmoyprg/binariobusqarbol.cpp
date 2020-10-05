//Udemy Progamación ATS
//Ejemplo arbol   arboo binario de busqueda


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;	
};


//prototipos
void menu();
Nodo *crearNodo(int);
void insertarNodo(Nodo *&,int);


Nodo *arbol=NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

//funcion menu
void menu(){
	int dato, opcion;
	
	do{
		cout<<"\t.:Menu:."<<endl;
		cout<<"1. Insertar un nuevo nodo."<<endl;
		cout<<"2. Salir."<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato);//insertamos un nuevo nodo
				cout<<"\n";
				system("pause");
				break;
			
		}
		system("cls");		
	}while(opcion!=2);
	
}
//Funcion para crear un nuevo nodo

Nodo *crearNodo(int n){
	Nodo *nuevo_nodo=new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	
	return nuevo_nodo;
	
}

//funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n){
	if(arbol==NULL){//si el arbol esta vacio
		Nodo *nuevo_nodo=crearNodo(n);
		arbol=nuevo_nodo;
	}else{//si el arbol tiene un nodo o mas
		int valorRaiz=arbol->dato;//obtenemos el vlor de la raiz
		if(n<valorRaiz){//si el elemento es menor a la raiz, insertamos en izq
			insertarNodo(arbol->izq,n);
		}else{//si el numero es mayor a la raiz, insertamos en derecha
			insertarNodo(arbol->der,n);
		}
	}
}

