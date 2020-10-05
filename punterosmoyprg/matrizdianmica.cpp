//Udemy Progamación ATS
//Ejemplo Punteros matriz dinamica


/*

**puntero_matriz -> *puntero_fila -> [int] [int]
					*puntero_fila -> [int] [int]
					*puntero_fila -> [int] [int]
					
					
	1 2 3      1 -> 2 3
	4 5 6      4 -> 5 6
	7 8 9      7 -> 8 9
	  				

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//prototipo
void pedirDatos();
void mostrarMatriz(int **, int, int);

int **punteromatriz, nFilas, nCol;


int main(){
	
	pedirDatos();
	mostrarMatriz(punteromatriz,nFilas,nCol);
	
	
	//Lierar memoria de la matriz
	for(int i=0;i<nFilas;i++){ //columnas
		delete[] punteromatriz[i];
	}
	
	delete[] punteromatriz;//Filas
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el numero de Filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de Columnas: ";
	cin>>nCol;
	
	//reserva memoria para matriz
	punteromatriz= new int*[nFilas];//Reserva memoria para filas
	for(int i=0;i<nFilas;i++){
		punteromatriz[i]= new int[nCol]; //Reservar memoria para columnas
	}
	
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite el numero ["<<i<<"]["<<j<<"]: ";
			cin>>*(*(punteromatriz+i)+j);//punteroatriz[i][j]
		}
	}
	
	
}

void mostrarMatriz(int **punteromatriz, int nFilas, int nCol){
	cout<<"\n\nImprimiendo matriz."<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(punteromatriz+i)+j)<<" ";//punteromatriz[i][j]
		}
		cout<<"\n";
	}
	
}
