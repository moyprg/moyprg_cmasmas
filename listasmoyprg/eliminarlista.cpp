//Udemy Progamaci�n ATS
//Ejemplo Listas eliminar


#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de funciones
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);

Nodo *lista=NULL;

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int opcion,dato;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar elementos a la lista\n";
		cout<<"2. Mostrar los elelemntos de la lista\n";
		cout<<"3. Buscar elemento\n";
		cout<<"4. Eliminar elemento de la lista\n";
		cout<<"5. Salir\n";
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Digite un numero: ";
				cin>>dato;
				insertarLista(lista,dato);
				cout<<"\n";
				system("pause");
				break;
				
			case 2:
				mostrarLista(lista);
				cout<<"\n";
				system("pause");
				break;
			case 3:
				cout<<"\nDigite un numero a buscar: ";
				cin>>dato;
				buscarLista(lista,dato);
				cout<<"\n";
				system("pause");
				break;
			case 4: 
				cout<<"\nDigite el elemento que desea eliminar: ";
				cin>>dato;
				eliminarNodo(lista,dato);
				cout<<"\n";
				system("pause");
				break;
						
		}
		system("cls");
	}while(opcion!=5);
	
	
}



void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL)&&((aux1->dato<n))){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista==aux1){
		lista=nuevo_nodo;
	}else{
		aux2->siguiente=nuevo_nodo;
	}
	
	nuevo_nodo->siguiente=aux1;
	
	cout<<"\tElemento "<<n<<" insertado a la lista correctamente."<<endl;
	
}

void mostrarLista(Nodo *lista){
	Nodo *actual=new Nodo();
	actual =lista;
	
	while(actual!=NULL){
		cout<<actual->dato<<" -> ";
		actual=actual->siguiente;
	}
	
}

void buscarLista(Nodo *lista, int n){
	bool band=false;
	
	Nodo *actual= new Nodo();
	actual =lista;
	
	while((actual!=NULL)&&(actual->dato<=n)){
		if(actual->dato==n){
			band=true;
		}
		actual=actual->siguiente;
		
	}
	
	if(band==true){
		cout<<"Elemento "<<n<<" SI ha sido encontrado en lista\n";
	}else{
		cout<<"Elemento "<<n<<" No ha sido encontrado en lista\n";
	}
	
}

void  eliminarNodo(Nodo *&lista, int n){
	//Presentar si la lista no esta vacia
	if(lista!=NULL){
		
		Nodo *aux_borrar;
		Nodo *anterior=NULL;
		
		aux_borrar=lista;
		
		//Recorrer la lista
		while((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;
			
		}
		
		//El elemento no ha sido encontrado 
		if(aux_borrar==NULL){
			cout<<"El elemento no ha sido encontrado\n";
		}
		//El primer elemento es el que vamos a eliminar
		else if(anterior==NULL){
			lista=lista->siguiente;
			delete aux_borrar;
		}
		//El elemento esta en la lista pero no es el primer nodo
		else{
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
		
	}
	
}