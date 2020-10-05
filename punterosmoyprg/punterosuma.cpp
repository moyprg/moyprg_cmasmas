//Udemy Progamación ATS
//Ejemplo Punteros suma matriz dinamica

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedirDatos();
void sumarMatriz(int **, int**, int, int);
void mostrarMatriz(int **, int, int);

int **punteromatriz1, **punteromatriz2, nFilas, nCol;

int main(){
	
	pedirDatos();
	sumarMatriz(punteromatriz1,punteromatriz2,nFilas,nCol);
	mostrarMatriz(punteromatriz1,nFilas,nCol);
	
	//liberar memoria utilizada matriz1
	for(int i=0;i<nFilas;i++){
		delete[] punteromatriz1[i];
	}
	
	delete[] punteromatriz1;
	
		//liberar memoria utilizada matriz2
	for(int i=0;i<nFilas;i++){
		delete[] punteromatriz2[i];
	}
	
	delete[] punteromatriz2;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite numero de filas: ";
	cin>>nFilas;
	cout<<"Digite numero de columnas: ";
	cin>>nCol;
	
	//Reservar memoria para la primera matriz
	punteromatriz1=new int*[nFilas];//memoria filas
	for(int i=0;i<nFilas;i++){
		punteromatriz1[i]=new int[nCol];//memoria columnas
	}
	
	cout<<"\nDigite los elementos."<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punteromatriz1+i)+j);//puntero[i][j]
		}
	}
	
	//Reservar memoria para la segunda matriz
	punteromatriz2=new int*[nFilas];//memoria filas
	for(int i=0;i<nFilas;i++){
		punteromatriz2[i]=new int[nCol];//memoria columnas
	}
	
	cout<<"\nDigite los elementos."<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punteromatriz2+i)+j);//puntero[i][j]
		}
	}
		
}

void sumarMatriz(int **punteromatriz1,int **punteromatriz2, int nFilas, int nCol){
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(punteromatriz1+i)+j)+=*(*(punteromatriz2+i)+j);
		}
	}
	
}

void mostrarMatriz(int **punteromatriz1, int nFilas, int nCol){
	cout<<"\n\nLa suma de la matriz es: "<<endl;
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(punteromatriz1+i)+j)<<" ";//punteromatriz1[i][j]
		}
		cout<<"\n";
	}
	
}

