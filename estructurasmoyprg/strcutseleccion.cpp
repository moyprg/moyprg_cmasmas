//Udemy Progamación ATS
//Ejemplo Estructuras seleccion

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct persona{
	char nombre[20];
	bool discapacidad;
	
}per[100],perSinD[100],perConD[100];
//perSinD=persona sin disc
//perConD=persona con disc

int main(){
	int n_per,j=0,k=0;
	
	cout<<"Digite el numeros de personas: ";
	cin>>n_per;
	
	//rellenar vector de dato de personas
	for(int i=0;i<n_per;i++){
		fflush(stdin);
		cout<<"Digite nombre: ";
		cin.getline(per[i].nombre,20,'\n');
		cout<<"La persona tiene discapacidad (1/0): ";
		cin>>per[i].discapacidad;
		
		
		//almacenar personas con disc
		if(per[i].discapacidad==1){
			strcpy(perConD[j].nombre,per[i].nombre);
			j++;
		}else{
			strcpy(perSinD[k].nombre,per[i].nombre);
			k++;
		}
	}
	
	cout<<"\nMostrar las personas sin discapacidad: "<<endl;
	for(int i=0;i<k;i++){
		cout<<perSinD[i].nombre<<endl;
	}
	
	cout<<"\nMostrar personas con discapacidad: "<<endl;
	for(int i=0;i<j;i++){
		cout<<perConD[i].nombre<<endl;
	}
	
	
	getch();
	return 0;
}



