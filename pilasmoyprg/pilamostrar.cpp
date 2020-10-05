//Udemy Progamación ATS
//Ejemplo Pilas mostrar numeros

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);
void sacarElemento(Nodo *&, int &);


int main(){
	Nodo *pila=NULL;
	int dato;
	char rpt;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"\nDesea agregar otro elemento a Pila(s/n): ";
		cin>>rpt;
	}while((rpt=='S')||(rpt=='s'));
	
	cout<<"\nSacando todos los los elementos de pila: ";
	while(pila!=NULL){//mientras no sea el final de la pila
		sacarElemento(pila,dato);
		if(pila!=NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	
	
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo=new Nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=pila;
	pila=nuevo_nodo;
	
	cout<<"\tElemento: "<<n<<" ha sido agregado correctamente.";
}

void sacarElemento(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
	
}

