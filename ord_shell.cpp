//Udemy Progamación ATS
//Ejemplo Ordenamiento Shell

#include<iostream>
#include<conio.h>

using namespace std;

void intercambio(float &x, float &y){
	float aux;
	
	aux=x;
	x=y;
	y=aux;	
	
}

void OrdenamientoShell(float a[], int n){
	int salto,i,j,k;
	
	salto=n/2;
	
	while(salto>0){
		for(i=salto;i<n;i++){
			j=i-salto;
			while(j>=0){
				k=j+salto;
				if(a[j]<=a[k]){  //Par de elementos estan ordenados
					j=-1;
				}
				else{ //par de elementos estan desordenados
					intercambio(a[j],a[k]);
					j-=salto;
				}
			}
		}
		salto=salto/2;
		
	}
	
	
}


int main(){
	
	float arreglo[]={4,6,1,9,5,10,2,11,19,7};
	
	OrdenamientoShell(arreglo,10);
	
	cout<<"Arreglo ascedente."<<endl;
	for(int i=0;i<10;i++){
		cout<<arreglo[i]<<" ";
	}
	
	cout<<"\nArreglo descendente."<<endl;
	for(int i=9;i>=0;i--){
		cout<<arreglo[i]<<" ";
	}
	
	getch();
	return 0;
}
