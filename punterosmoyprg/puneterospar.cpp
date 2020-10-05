//Udemy Progamación ATS
//Ejemplo Punteros arreglos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int numeros[10],*dir_numeros;
	
	for(int i=0;i<10;i++){
		cout<<"Digite el numero ["<<i<<"]: ";
		cin>>numeros[i];
		
	}
	
	cout<<"\n";
	dir_numeros=numeros; //posicion de memoria comienza numeros
	
	for(int i=0;i<10;i++){
		if(*dir_numeros%2==0){
			cout<<"El numero: "<<*dir_numeros<<" es par."<<endl;
			cout<<"Posicion: "<<dir_numeros<<endl;
		}
		dir_numeros++;
	}
	
		
	getch();
	return 0;
}
