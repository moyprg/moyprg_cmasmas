//Udemy Progamación ATS
//Ejemplo Colas

#include<iostream>
#include<conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
	
};

//prototipo
void insertarCola(Nodo *&, Nodo *&, int);
bool cola_vacia(Nodo *);


int main(){
	
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente,fin,dato);
	
	
	getch();
	return 0;
}

//Funcion insertar
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo= new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if(cola_vacia(frente)){
		frente=nuevo_nodo;
	}else{
		fin->siguiente=nuevo_nodo;
	}
	
	fin=nuevo_nodo;
		
	cout<<"\tElemento "<<n<<" insertado correctamente.\n"<<endl;
	
}


//Funcion para determinar si la cola esta vacia o no

bool cola_vacia(Nodo *frente){
	return (frente==NULL)? true:false;

/*	if(frente==NULL){
		return true;
	}else{
		return 0;
	}
*/	
}
