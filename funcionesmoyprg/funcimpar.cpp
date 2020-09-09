//Udemy Progamación ATS
//Ejemplo Funcion impar

#include<iostream>
#include<conio.h>


using namespace std;

void pedirDatos();
void impares(int vector[], int);


int vector[100], tam;
int main(){
	
	pedirDatos();
	impares(vector,tam);
	
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

void impares(int vector[], int tam){
	int vecImpares[100];
	int j=0;
	
	for(int i=0;i<tam;i++){
		if(vector[i]%2!=0){
			vecImpares[j]=vector[i];
			j++;
		}
		
	}
	
	cout<<"\nImprimir los elementos impares."<<endl;
	for(int i=0;i<j;i++){
		cout<<vecImpares[i]<<" ";
	}
	
}


