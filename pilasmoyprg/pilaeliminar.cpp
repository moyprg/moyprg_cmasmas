//Udemy Progamación ATS
//Ejemplo Pilas eliminar


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);//se pasa por referencia por que va a estar cambiando 
void sacarPila(Nodo *&, int &);

int main(){
	
	Nodo *pila= NULL;
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	
	agregarPila(pila,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	
	agregarPila(pila,dato);
	
	cout<<"\n\nSacar elemento de las pilas: "<<endl;
	while(pila!=NULL){//mientras no sea el final de la pila
		sacarPila(pila,dato);
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
	
	Nodo *nuevo_nodo = new Nodo(); //reservar memoria
	nuevo_nodo->dato=n;//igualar el dato que el usuario esta enviando y ponerlo en el nodo
	nuevo_nodo->siguiente=pila;//puntero igual ala pila
	pila= nuevo_nodo;//igual pila al nuevo nodo
	
	cout<<"\nEl elemento "<<n<<" agregar a Pila correctamente."<<endl;
	
}

void sacarPila(Nodo *&pila, int &n){
	
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
	
}
