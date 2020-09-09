//Udemy Progamación ATS
//Ejemplo Estructuras promedio

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio{
	
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;
}alumnos[100];


int main(){
	int n_alum,pos;
	float prome[100],mayor=0;
	cout<<"Digite numero de alumnos: ";
	cin>>n_alum;
	
	for(int i=0;i<n_alum;i++){
		fflush(stdin);

	cout<<"\nNombre: ";
	cin.getline(alumnos[i].nombre,20,'\n');
	cout<<"Sexo: ";
	cin.getline(alumnos[i].sexo,20,'\n');
	cout<<"Edad: ";
	cin>>alumnos[i].edad;
	
	cout<<"\nNotas del alumno.\n";
	cout<<"Nota 1: ";
	cin>>alumnos[i].prom.nota1;
	cout<<"Nota 2: ";
	cin>>alumnos[i].prom.nota2;
	cout<<"Nota 3:";
	cin>>alumnos[i].prom.nota3;
	
	prome[i]=(alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;
	
	if(prome[i]>mayor){
		mayor=prome[i];
		pos=i;
	}
	
	}
	
	cout<<"\nDatos del alumno con mejor promedio: \n";
	cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Sexo: "<<alumnos[pos].sexo<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio: "<<prome[pos]<<endl;
	
	
	getch();
	return 0;
	
}
