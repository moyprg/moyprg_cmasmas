//Udemy Progamación ATS
//Ejemplo Funcion recursiva numeros

/*
escribeNumeros(ini,fin)=ini  , si ini=fin;

       escribeNumeros(ini,fin-1)  , si fin>ini;

*/

#include<iostream>
#include<conio.h>

using namespace std;

int escribirNumeros(int, int);

int main(){
	int ini,fin;
	
	cout<<"Digite el inicio: ";
	cin>>ini;
	cout<<"Digite el final: ";
	cin>>fin;
	
	for(int i=ini; i<=fin; i++){
		cout<<escribirNumeros(i,fin)<<" ";
	}
	
	
	getch();
	return 0;
}

int escribirNumeros(int ini, int fin){
	
	if(ini==fin){
		return ini;
	}else{
		return escribirNumeros(ini, fin-1);
	}
	
}

