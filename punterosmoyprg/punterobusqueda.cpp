//Udemy Progamación ATS
//Ejemplo Punteros busqueda

#include<iostream>
#include<conio.h>

using namespace std;

void pedirDatos();
void buscarElemento(int *, int);


int nElementos, *elemento;


int main(){
	
	pedirDatos();
	buscarElemento(elemento,nElementos);//funciaon busqueda
	
	delete[] elemento;//lierar la memoria utilizada

	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el numero de elementos: ";
	cin>>nElementos;
	
	elemento= new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite numero ["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i];
	}	
	
}

void buscarElemento(int *elemento, int nElemento){
	
	int dato,i;
	bool band=false;
	
	cout<<"\n\nDigite un numero a buscar: ";
	cin>>dato;
	
	//busca secuencial
	i=0;
	while((i<nElemento)&&(band==false)){
		if(*(elemento+i)==dato){
			band=true;
		}
		i++;
	}
	
	if(band==false){
		cout<<"El numero "<<dato<<" NO existe en el arreglo. "<<endl;
	}else{
		cout<<"El numero "<<dato<<" Si existe en el arreglo, posicion "<<i-1<<endl;
	}
}




