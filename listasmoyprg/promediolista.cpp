//Udemy Progamación ATS
//Ejemplo Listas buscar menos mayor

#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
	float dato;
	Nodo *siguiente;
	
		
};

void insertarLista(Nodo *&,float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
	Nodo *lista=NULL;
	float dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero: ";
		cin>>dato;
		insertarLista(lista,dato);//insertamos el numero en lista
		
		cout<<"Desea agregar un nuevo elemento en listas (s/n): ";
		cin>>respuesta;
		
	}while(respuesta=='s'||respuesta=='S');
	
	cout<<"\nelementos de la lista: \n";
	mostrarLista(lista);
	
	calcularSumaPromedio(lista);
	
	getch();
	return 0;
}
//inserta elementos al final de la lista
void insertarLista(Nodo *&lista, float n){
	Nodo *nuevo_nodo=new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
		
	if(lista==NULL){//si la lista esta vacia
		lista=nuevo_nodo;
	}else{
		aux=lista;
		while(aux->siguiente!=NULL){//recorrer lista
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo_nodo;//agregamos el nuevo nodo
	}
	
	cout<<"\tElemento "<<n<<" insertando en lista correctamente.\n";
	
}
//mostrar todos los elementos
void mostrarLista(Nodo *lista){
	while(lista!=NULL){//mientras no se el final de la lista
		cout<<lista->dato<<" -> ";
		lista=lista->siguiente;//avanzar la lista
	}
		
}

//calcular la suma y promedio de los elementos de la lista
void calcularSumaPromedio(Nodo *lista){
	float suma=0,promedio;
	int contador=0;
	
	while(lista!=NULL){//mientras no sea el final de la lista
		suma+=lista->dato;//suma iterativa
		contador++;//contar el numero de elementos de la lista
		lista=lista->siguiente;//avanzar en lista
		
		
	}
	
	promedio=suma/contador;
	cout<<"\n\nLa suma es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
	
}
