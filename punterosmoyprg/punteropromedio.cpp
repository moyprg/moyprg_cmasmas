//Udemy Progamación ATS
//Ejemplo Punteros estructura promedio

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
	
}alumno[3],*punteroalumno=alumno;

//prototipo
void pedirDatos();
void mejorPromedio(Alumno *);


int main(){
	
	pedirDatos();
	mejorPromedio(punteroalumno);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Digite su nombre: ";
		cin.getline((punteroalumno+i)->nombre,30,'\n');
		cout<<"Digite su edad: ";
		cin>>(punteroalumno+i)->edad;
		cout<<"Digite el promedio: ";
		cin>>(punteroalumno+i)->promedio;
		
	}
	
}

void mejorPromedio(Alumno *punteroalumno){
	float mayor=0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((punteroalumno+i)->promedio>mayor){//punteroalumno[i].promedio
			mayor=(punteroalumno+i)->promedio;//comprobar el mayor alumno
			pos=i;//guardar la posicion del mayor promedio
		}
	}
	
	//imprimir datos del mayor promedio
	cout<<"\nEl alumno con mejor promedio: "<<endl;
	cout<<"Nombre: "<<(punteroalumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(punteroalumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(punteroalumno+pos)->promedio<<endl;
		
}




