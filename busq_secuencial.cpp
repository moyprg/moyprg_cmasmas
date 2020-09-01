//Udemy Progamación ATS
//Ejemplo Busqueda secuencial

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	char a[]={'a','e','i','o','u'}, dato;
	int i;
	char band='F';
	
	dato='e';
	//busqueda secuencial
	i=0;
	while((band=='F')&&(i<5)){
		if(a[i]==dato){
			band='V';
		}
		i++;
	}
	
	if(band=='F'){
		cout<<"El numero a buscar no se encuentra en el arreglo"<<endl;
	}else if(band=='V'){
		cout<<"EL numero fue encintrado en la posicion: "<<i-1<<"."<<endl;
	}
	
	getch();
	return 0;
}
