//Udemy Progamación ATS
//Ejemplo Punteros vocales

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

//prototipo
void pedirDatos();
void contarVocales(char *);

char palabraUsuario[50];

int main(){
	
	pedirDatos();
	contarVocales(palabraUsuario); //&palabraUsuario
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite una palabra o frase: ";
	cin.getline(palabraUsuario,50,'\n');
	
	strupr(palabraUsuario);//pasar a mayuscula
}

void contarVocales(char *palabra){
	
	int contA=0,contE=0,contI=0,contO=0,contU=0;
	
	while(*palabra){//mientras palabra no sea nulo '\0'
		switch(*palabra){
			
			case 'A':
				contA++;
				break;
			case 'E':
				contE++;
				break;
			case 'I':
				contI++;
				break;
			case 'O':
				contO++;
				break;
			case 'U':
				contU++;
				break;			
		}
		palabra++;
		
	}
	
	cout<<"\n\nNumero de veces de vocales: "<<endl;
	cout<<"Numero de veces de A: "<<contA<<endl;
	cout<<"Numero de veces de E: "<<contE<<endl;
	cout<<"Numero de veces de I: "<<contI<<endl;
	cout<<"Numero de veces de O: "<<contO<<endl;
	cout<<"Numero de veces de U: "<<contU<<endl;
	
	
}
