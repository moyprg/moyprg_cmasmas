//Udemy Progamación ATS
//Ejemplo Funcion suma 


#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void comprobarOrdenamiento(int vector[],int);

int vector[100],tam;

int main(){
	
	pedirDatos();
	comprobarOrdenamiento(vector,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el tamaño del vector: ";
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vector[i];
	}
	
}

void comprobarOrdenamiento(int vector[], int tam){
	char band='F';
	
	int i=0;
	
	while((band=='F')&&(i<tam-1)){
		if(vector[i]>vector[i+1]){
			band='V';
		}
		i++;
	}
	
	if(band =='F'){
		cout<<"El arreglo eta ordenado crecientemente."<<endl;
	}else{
		cout<<"El arreglo no esta ordenado."<<endl;
	}
	
}
