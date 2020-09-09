//Udemy Progamación ATS
//Ejemplo Funcion matriz simetrica

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100], int, int);

int m[100][100],nfilas,ncol;

int main(){
	
	pedirDatos();
	comprobarSimetria(m,nfilas,ncol);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: "<<endl;
	cin>>nfilas;
	cout<<"Digite el numero de columnas: "<<endl;
	cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	
}

void comprobarSimetria(int m[][100], int nfilas, int ncol){
	int cont=0;
	
	if(nfilas==ncol){
		for(int i=0;i<nfilas;i++){
			for(int j=0;j<ncol;j++){
				if(m[i][j]==m[j][i]){
					cont++;
				}
			}
		}
		
	}
	
	if(cont==nfilas*ncol){
		cout<<"La matriz es Simetrica. ";
	}else{
		cout<<"La matriz no es simetrica.";
	}
	
	
}


