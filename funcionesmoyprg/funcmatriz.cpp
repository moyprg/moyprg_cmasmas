//Udemy Progamación ATS
//Ejemplo Funcion pasar parametros tipo matriz

#include<iostream>
#include<conio.h>

using namespace std;

void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado(int m[][3], int , int);
void mostrarElevada(int m[][3], int, int );


int main(){
	const int nfilas=2;
	const int ncol=3;
	
	int m[nfilas][ncol]={{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,nfilas,ncol);
	calcularCuadrado(m,nfilas,ncol);
	mostrarElevada(m,nfilas,ncol);
	
	getch();
	return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
	
	cout<<"Mostrar matriz original: "<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}


void calcularCuadrado(int m[][3], int nfilas, int ncol){
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			m[i][j]*=m[i][j];
		}
	}
	
}

void mostrarElevada(int m[][3], int nfilas, int ncol){
	
	cout<<"\n\nMostrar matriz elevada: "<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}
