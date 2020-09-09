//Udemy Progamación ATS
//Ejemplo Estructuras atleta

#include<iostream>
#include<conio.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[20];
	int medallas;
	
}a[100];

int main(){
	int n_a;
	int n_med=0;
	int pos;
	
	cout<<"Digite el numero de atletas: ";
	cin>>n_a;
	
	for(int i=0;i<n_a;i++){
		fflush(stdin);
		
		cout<<"Nombre: ";
		cin.getline(a[i].nombre,20,'\n');
		cout<<"Pais: ";
		cin.getline(a[i].pais,20,'\n');
		cout<<"Numero de medallas: ";
		cin>>a[i].medallas;
			
		if(a[i].medallas>n_med){
			n_med=a[i].medallas;
			pos=i;
		}	
				
	}
	
	cout<<"Atleta con mayor numero de medallas: "<<endl;
	cout<<"Nombre: "<<a[pos].nombre<<endl;
	cout<<"Pais: "<<a[pos].pais<<endl;
	cout<<"Medallas: "<<a[pos].medallas<<endl;
	
	
	
	getch();
	return 0;
}
