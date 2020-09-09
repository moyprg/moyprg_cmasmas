//Udemy Progamación ATS
//Ejemplo Funcion funcion trasformacion de horas

#include<iostream>
#include<conio.h>

using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	int totalSeg, horas, min, seg;
	
	cout<<"Digite el total de segundos: ";
	cin>>totalSeg;
	
	tiempo(totalSeg,horas,min,seg);
	
	cout<<"Tiempo: "<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	getch();
	return 0;
	
}

void tiempo(int totalSeg, int& horas, int& min, int& seg){
	
	horas=totalSeg/3600;
	totalSeg%=3600;
	min=totalSeg/60;
	seg=totalSeg%60;
	
}
