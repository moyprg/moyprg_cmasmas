//Udemy Progamación ATS
//Ejemplo arbol eliminar



#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;	
	Nodo *padre;
};


//prototipos
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&,int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo*);
void destruirNodo(Nodo *);

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
		cout<<"4. Recorrer el arbol en preorden."<<endl;
		cout<<"5. Recorrer el arbol en inorden"<<endl;
		cout<<"6. Recorrer el arbol en post orden."<<endl;
		cout<<"7. Eliminar un nodo del arbol."<<endl;
		cout<<"8. Salir."<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"\nDigite un numero: ";
				cin>>dato;
				insertarNodo(arbol,dato,NULL);//insertamos un nuevo nodo
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
			case 5:
				cout<<"\nRecorrer en inOrden\n";
				inOrden(arbol);
				cout<<"\n\n";
				system("pause");
				break;
			case 6:
				cout<<"\nRecorrer en postorden\n";
				postOrden(arbol);
				cout<<"\n\n";
				system("pause");
				break;
			case 7:
				cout<<"\nDigite el numero a eliminar.\n";
				cin>>dato;
				eliminar(arbol,dato);
				cout<<"\n";
				system("pause");
				break;	
					
		}
		system("cls");		
	}while(opcion!=8);
	
}
//Funcion para crear un nuevo nodo

Nodo *crearNodo(int n, Nodo *padre){
	Nodo *nuevo_nodo=new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->der=NULL;
	nuevo_nodo->izq=NULL;
	nuevo_nodo->padre=padre;
	
	return nuevo_nodo;
	
}

//funcion para insertar elementos en el arbol
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
	if(arbol==NULL){//si el arbol esta vacio
		Nodo *nuevo_nodo=crearNodo(n, padre);
		arbol=nuevo_nodo;
	}else{//si el arbol tiene un nodo o mas
		int valorRaiz=arbol->dato;//obtenemos el vlor de la raiz
		if(n<valorRaiz){//si el elemento es menor a la raiz, insertamos en izq
			insertarNodo(arbol->izq,n,arbol);
		}else{//si el numero es mayor a la raiz, insertamos en derecha
			insertarNodo(arbol->der,n,arbol);
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

//funcio de recorrido en profundidad inorden
void inOrden(Nodo *arbol){
	if(arbol==NULL){
		return;
	}else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}	
}

//funcion de recorrido postorden
void postOrden(Nodo *arbol){
	if(arbol==NULL){//si el arbol esta vacio
		return;
	}else{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//eliminar un nodo del arbol
void eliminar(Nodo *arbol, int n){
	if(arbol==NULL){//Si el arbol esta vacio
		return;//no haces nada
	}else if(n<arbol->dato){//si el valor es menor
		eliminar(arbol->izq,n);//busca por la izq
	}else if(n>arbol->dato){//si el valor es mayor
		eliminar(arbol->der,n);//buscar por la derecha
	}else{//si ya encontraste el valor
		eliminarNodo(arbol);
	}	
}

//funcion para determinar el nodo mas izq posible
Nodo *minimo(Nodo *arbol){
	if(arbol==NULL){//si el arbol esta vacio
		return NULL; //retornas nulo
	}
	if(arbol->izq){//sitiene hijo izq
		return minimo(arbol->izq); //buscamos la parte mas izq
	}else{//si no tiene hijo izq
		return arbol;//retornamos el mismo nodo
	}	
}
//funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato==arbol->padre->izq->dato){
			arbol->padre->izq=nuevoNodo;
		}else if(arbol->dato==arbol->padre->der->dato){
			arbol->padre->der=nuevoNodo;
		}
	}
	if(nuevoNodo){
		//porcedemos a asignarle su nuevo padre
		nuevoNodo->padre=arbol->padre;
	}
	
}

//funcion para destruir un nodo
void destruirNodo(Nodo *nodo){
	nodo->izq=NULL;
	nodo->der=NULL;
	
	delete nodo;
}


//funcion para eliminar nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
	if(nodoEliminar->izq && nodoEliminar->der){//si el nodo tiene hijo izq y der
		Nodo *menor=minimo(nodoEliminar->der);
		nodoEliminar->dato=menor->dato;
		eliminarNodo(menor);
	}else if(nodoEliminar->izq){//si tiene hijo izq
		reemplazar(nodoEliminar,nodoEliminar->izq);
		destruirNodo(nodoEliminar);
	}else if(nodoEliminar->der){//si tiene un hijo der
		reemplazar(nodoEliminar,nodoEliminar->der);
		destruirNodo(nodoEliminar);
	}else{//no tiene hijos
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
	
		
}


