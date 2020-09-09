//Udemy Progamación ATS
//Ejemplo Funcion suma 

#include<iostream>
#include<conio.h>

using namespace std;

void pedirdatos();
int calcularsuma(int vec[],int);

int vector[100],tam;


int main(){
	
	pedirdatos();
	cout<<"\nLa suma de los elementos del vector es: "<<calcularsuma(vector,tam);
	
	getch();
	return 0;
}

void pedirdatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vector[i];
	}
}

int calcularsuma(int vector[],int tam){
	int suma=0;
	
	for(int i=0;i<tam;i++){
		suma+=vector[i];
	}
	
	return suma;
	
}
