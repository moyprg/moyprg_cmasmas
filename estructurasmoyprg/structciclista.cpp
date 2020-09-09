//Udemy Progamación ATS
//Ejemplo Estructuras ciclista

#include<iostream>
#include<conio.h>

using namespace std;

struct etapas{
	int horas;
	int minutos;
	int segundos;
	
}etapas[100];

int main(){
	int n_eta, horasT=0,minutosT=0,segundosT=0;
	
	cout<<"Digite el numero de estapas: ";
	cin>>n_eta;
	
	for(int i=0;i<n_eta;i++){
		fflush(stdin);
		
		cout<<"Digite el numero de horas: ";
		cin>>etapas[i].horas;
		cout<<"Digite el numero de minitos: ";
		cin>>etapas[i].minutos;
		cout<<"Digite el numero de segundos: ";
		cin>>etapas[i].segundos;
		
		horasT=horasT+etapas[i].horas;
		minutosT=minutosT+etapas[i].minutos;
		if(minutosT>=60){
			minutosT-=60;
			horasT++;
		}
		segundosT=segundosT+etapas[i].segundos;
		if(segundosT>=60){
			segundosT-=60;
			minutosT++;
		}
		
	}
	
	cout<<"\nTiempo total: "<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	
	
	
	getch();
	return 0;
}
