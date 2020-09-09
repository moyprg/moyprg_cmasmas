//Udemy Progamación ATS
//Ejemplo Funcion cambio de signo


#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void cambiarSigno(int vector[], int);
void mostrarVector(int vector[], int);

int vector[100],tam;
int main(){
	
	pedirDatos();
	cambiarSigno(vector,tam);
	mostrarVector(vector,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el tamaño del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite el numero: ";
		cin>>vector[i];
		
	}
}

void cambiarSigno(int vector[], int tam){
	
	for(int i=0;i<tam;i++){
		vector[i]*=-1;
	}
}

void mostrarVector(int vector[], int tam){
	cout<<"\nMostrar el vector con signo cambiado."<<endl;
	
	for(int i=0;i<tam;i++){
		cout<<vector[i]<<" ";
		
	}
}
