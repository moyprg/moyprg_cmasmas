//Udemy Progamación ATS
//Ejemplo Punteros transmision de arreglos

#include<iostream>
#include<conio.h>

using namespace std;

int hallarMax(int *, int); //prototipo de funcion

int main(){
	
	const int nElementos=5;
	int numeros[5]={3,12,2,8,1};
	
	cout<<"El mayor del vector es: "<<hallarMax(numeros,nElementos)<<endl;
	
	getch();
	return 0;
}

int hallarMax(int *dirVec,int nElementos){
	int max=0;
	
	for(int i=0;i<nElementos;i++){
		if(*(dirVec+i)>max){
			max=*(dirVec+i);
		}
	}
	
	return max;
	
}
