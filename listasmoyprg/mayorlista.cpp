//Udemy Progamación ATS
//Ejemplo Listas buscar menos mayor

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
	
};

void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

int main(){
	Nodo *lista=NULL;
	int dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero.";
		cin>>dato;
		insertarLista(lista,dato);//Agregando un nuevo elemento a la lista
		
		cout<<"Desea agregar otro nodo(s/n): ";
		cin>>respuesta;
		
	}while(respuesta=='s'||respuesta=='S');
	
	cout<<"\nMostrar los elmentos de la lista: "<<endl;
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	getch();
	return 0;
}


//Agregar elementos al final de la lista

void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo= new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	
	if(lista==NULL){//si la ista esta vacia
		lista=nuevo_nodo;//agregar el primer elemento a la lista
	}else{
		aux=lista;//aux apunta al inicio de la lista
		while(aux->siguiente!=NULL){//recorrar la lista
			aux=aux->siguiente;//avanzamos posiciones en la lista
		}
		aux->siguiente=nuevo_nodo;//agregamos el nuevo nodo a la lista
	}
	
	cout<<"\nElemento "<<n<<" agregado a la lista correctamente.\n";
}

//mostrar lista
void mostrarLista(Nodo *lista){
	while(lista !=NULL){//mientras no se el final de la lista
		cout<<lista->dato<<" -> ";
		lista=lista->siguiente;//avanzamos una posicion en lista
	}
	
}

//Calcular mayor y menor
void calcularMayorMenor(Nodo *lista){
	int mayor=0, menor=9999;
	
	while(lista!=NULL ){//recorremos la lista
		if((lista->dato)>mayor){//calculando el mayor elemento
			mayor=lista->dato;
		}
		if((lista->dato)<menor){//calculando el menor elemento
			menor=lista->dato;
		}
		lista=lista->siguiente;//avanzamos una posicion en lista
		
	}
	
	cout<<"\nEl mayor elemento es: "<<mayor<<endl;
	cout<<"El menor elemento es: "<<menor<<endl;
}

