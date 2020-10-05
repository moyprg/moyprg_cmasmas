//Udemy Progamación ATS
//Ejemplo Pilas insertar

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void agregarPila(Nodo *&,int);//se pasa por referencia por que va a estar cambiando 

int main(){
	
	Nodo *pila= NULL;
	int n1,n2;
	
	cout<<"Digite un numero: ";
	cin>>n1;
	
	agregarPila(pila,n1);
	
	cout<<"Digite un numero: ";
	cin>>n2;
	
	agregarPila(pila,n2);	
	
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
