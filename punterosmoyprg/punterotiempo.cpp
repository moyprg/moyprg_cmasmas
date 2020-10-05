//Udemy Progamación ATS
//Ejemplo Punteros estructura tiempo ciclista

#include<iostream>
#include<conio.h>

using namespace std;

struct Etapa{
	int horas,min,seg;
}etapa[3],*punteroetapa=etapa;

void pedirDatos();
void calcularTiempo(Etapa *);

int main(){
	
	pedirDatos();
	calcularTiempo(punteroetapa);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"\nDigite los tiempos: "<<endl;
	for(int i=0;i<3;i++){
		cout<<"Horas: ";
		cin>>(punteroetapa+i)->horas;
		cout<<"Minutos: ";
		cin>>(punteroetapa+i)->min;
		cout<<"Segundos: ";
		cin>>(punteroetapa+i)->seg;
		cout<<"\n";
	}
}
	
void calcularTiempo(Etapa *punteroetapa){
	int horasT=0,minT=0,segT=0;
	
	for(int i=0;i<3;i++){
		horasT+=(punteroetapa+i)->horas;//horasT=horasT+punteros[i].horas
		minT+=(punteroetapa+i)->min;
		if(minT>=60){
			minT-=60;
			horasT++;
		}
		segT+=(punteroetapa+i)->seg;
		if(segT>=60){
			segT-=60;
			minT++;
		}
	}
	
	cout<<"\n\nMostrar tiempo total: "<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minT<<endl;
	cout<<"Segundos: "<<segT<<endl;
}	

