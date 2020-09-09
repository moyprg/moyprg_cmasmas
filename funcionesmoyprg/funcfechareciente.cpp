//Udemy Progamación ATS
//Ejemplo Funcion fecha mayor


#include<iostream>
#include<conio.h>

using namespace std;

struct Fecha{
	int dia,mes,anio;
}f1,f2;

//prototipo
void pedirDatos();
Fecha mayor(Fecha, Fecha);
void mostrar(Fecha);

int main(){
	
	pedirDatos();
	
	Fecha x= mayor(f1,f2);
	
	mostrar(x);
	
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite la primer fecha: "<<endl;
	cout<<"Dia: ";
	cin>>f1.dia;
	cout<<"Mes: ";
	cin>>f1.mes;
	cout<<"Anio: ";
	cin>>f1.anio;
	
	
	cout<<"Digite la segunda fecha: "<<endl;
	cout<<"Dia: ";
	cin>>f2.dia;
	cout<<"Mes: ";
	cin>>f2.mes;
	cout<<"Anio: ";
	cin>>f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2){
	Fecha mayor;
	
	if(f1.anio==f2.anio){
		if(f1.mes==f2.mes){
			if(f1.anio==f2.anio){
				cout<<"Ambas fechas son iguales."<<endl;
			}else if(f1.dia>f2.dia){
				mayor=f1;
			}else{
				mayor=f2;
			}
		}else if(f1.mes>f2.mes){
			mayor=f1;
		}else{
			mayor=f2;
		}
	}else if(f1.anio>f2.anio){
		mayor=f1;
	}else{
		mayor=f2;
	}
	

	
	return mayor;
}

void mostrar(Fecha x){
	cout<<"La fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
	
}
