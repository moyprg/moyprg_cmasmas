//Udemy Progamación ATS
//Ejemplo Funcion matriz menor elemento de fila

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
int comprobarMenor(int m[][100], int , int);

int m[100][100], nfilas, ncol;

int main(){
	
	pedirDatos();
	
	cout<<"El menor de la fila es: "<<comprobarMenor(m,nfilas,ncol);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas: ";
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	
}

int comprobarMenor(int m[][100], int nfilas, int ncol){
	int fila, menor=9999;
	
	cout<<"Digite la fila para comprobar el menor: ";
	cin>>fila;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(i==fila){
				if(m[i][j]<menor){
					menor=m[i][j];
				}
			}
		}
	}
	
	return menor;	
}


