//Udemy Progamación ATS
//Ejemplo arbol preorden


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
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);

Nodo *arbol=NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

//funcion menu
void menu(){
	int dato, opcion,contador=0;;
	
	do{
		cout<<"\t.:Menu:."<<endl;
		cout<<"1. Insertar un nuevo nodo."<<endl;
		cout<<"2. Mostar arbol."<<endl;
		cout<<"3. Buscar un elemento en el arbol."<<endl;
		cout<<"4. Recorre el arbol en preorden."<<endl;
		cout<<"5. Salir."<<endl;
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
			case 2:
				cout<<"\nMostrando el arbol completo. \n\n";
				mostrarArbol(arbol,contador);
				cout<<"\n";
				system("pause");
				break;
			case 3:
				cout<<"\nDigite el elemento a buscar: ";
				cin>>dato;
				if(busqueda(arbol,dato)==true){
					cout<<"\nElemento "<<dato<<" a sido encontrado en el arbol."<<endl;
				}else{
					cout<<"\nElemento no encontrado."<<endl;
				}
				cout<<"\n";
				system("pause");
				break;
			case 4:
				cout<<"\nRecorrer en preorden\n";
				preOrden(arbol);
				cout<<"\n\n";
				system("pause");
				break;	
				
		}
		system("cls");		
	}while(opcion!=5);
	
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

//funcion para mostar el arbol completo
void mostrarArbol(Nodo *arbol, int cont){
	if(arbol==NULL){//si el arbol esta vacio
		return;
	}else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}	
}

//funcion para buscar un elemento en el arbol
bool busqueda(Nodo *arbol, int n){
	if(arbol==NULL){// si el arbol esta vacio
		return false;
	}else if(arbol->dato==n){//si el nodo es igual al elemento
		return true;
	}else if(n<arbol->dato){
		return busqueda(arbol->izq,n);
	}else{
		return busqueda(arbol->der,n);
	}
	
}

//funcion en recorrido en profundidad preorden
void preOrden(Nodo *arbol){
	if(arbol==NULL){//si el arbol esta vacio
		return;
	}else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}


