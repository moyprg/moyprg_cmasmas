//Udemy Progamación ATS
//Ejemplo Punteros asignacion dinamica de arreglos memoria

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif,*calif;

int main(){
	
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;//liberando espacio en bytes
	
	getch();
	return 0;
}

void pedirNotas(){
	
	cout<<"Digite el numero de elementos: ";
	cin>>numCalif;
	
	calif= new int[numCalif]; //Crear el arreglo
	
	for(int i=0;i<numCalif;i++){
		cout<<"Ingrese la nota: ";
		cin>>calif[i];
	}
	
}


void mostrarNotas(){
	
	cout<<"\n\nMostrando las notas: "<<endl;
	
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}

