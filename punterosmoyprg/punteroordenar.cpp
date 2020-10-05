//Udemy Progamación ATS
//Ejemplo Punteros Ordenar

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);


int nElementos, *elementos;

int main(){
	
	pedirDatos();
	ordenarArreglo(elementos,nElementos);
	mostrarArreglo(elementos,nElementos);
	
	delete[] elementos; //liberar memoria utilizada para el arreglo dinamico
	
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el numero de elementos: ";
	cin>>nElementos;
	
	elementos= new int[nElementos]; //crear arreglo
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite el numero ["<<i<<"]: ";
		cin>>*(elementos+i); //elementos[i];
	}
}

void ordenarArreglo(int *elementos, int nElementos){
	int aux;
	
	//ordenar arreglo metodo burbuja
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos-1;j++){
			if(*(elementos+j)>*(elementos+j+1)){//elementos[j]>elementos[j+1]
				aux=*(elementos+j);
				*(elementos+j)=*(elementos+j+1);
				*(elementos+j+1)=aux;
			}
		}
	}
	
}

void mostrarArreglo(int *elementos, int nElementos){
	
	cout<<"\n\nMostrar arreglo ordenado: ";
	for(int i=0;i<nElementos;i++){
		cout<<*(elementos+i)<<" "; //elementos[i]
	}
	
}
