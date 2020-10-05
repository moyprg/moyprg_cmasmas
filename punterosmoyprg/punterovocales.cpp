//Udemy Progamación ATS
//Ejemplo Punteros vocales

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

void pedirDatos();
int contandoVocales(char *);

char nombreUsuario[30];	

int main(){
	
	pedirDatos();
	cout<<"\nEl nombre de vocales en el nombre son: "<<contandoVocales(nombreUsuario)<<endl;
	
	//nombreUsuario= &nombreUsuario[0]
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);//transformar a mayusculas
}

int contandoVocales(char *nombre){
	int cont=0;
	
	while(*nombre){//mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;	
		}
		nombre++;
	}
	
	return cont;
}

