//Udemy Progamación ATS
//Ejemplo Busqueda binaria


#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};
	int inf,sup,mitad,dato,i;
	char band='F';
	
	dato=4;
	//algoritmo busqueda binaria
	
	inf=0;
	sup=5;
	i=0;
	
	while((inf<=sup)&&(i<5)){
		mitad=(inf+sup)/2;
		if(numeros[mitad]==dato){
			band='V';
			break;
		}
		if(numeros[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		
		if(numeros[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;	
		}
		i++;
	}
	
	if(band=='V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
	}else{
		cout<<"EL numero no se encuentra en el arreglo."<<endl;
	}
	
	
	getch();
	return 0;
}
