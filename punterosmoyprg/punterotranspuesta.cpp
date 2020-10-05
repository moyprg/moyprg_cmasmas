//Udemy Progamación ATS
//Ejemplo Punteros matriz dinamica transpuesta

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **punteromatriz, nfilas,ncol;

int main(){
	
	pedirDatos();
	mostrarMatriz(punteromatriz,nfilas,ncol);
	
	//liberando memoria
	for(int i=0;i<nfilas;i++){
		delete[] punteromatriz[i];
	}
	
	delete[] punteromatriz;
	
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el numero de filas: ";
	cin>>nfilas;
	cout<<"Digite el numero de columnas. ";
	cin>>ncol;
	
	//Reservar memoria para la matriz;
	
	punteromatriz= new int*[nfilas];//reservando filas
	for(int i=0;i<nfilas;i++){
		punteromatriz[i]=new int[ncol];//reservar columnas
	}
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punteromatriz+i)+j);//puntero[i][j]
		}
	}
	
}

void mostrarMatriz(int **punteromatriz, int nfilas, int ncol){
	
	cout<<"\n\nImprimir matriz original."<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(punteromatriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\nImprimiendo matriz transpuesta."<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<*(*(punteromatriz+j)+i)<<" ";
		}
		cout<<"\n";
	}
	
}
