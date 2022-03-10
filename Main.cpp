#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<fstream>

#include"Alumno.cpp"
using namespace std;
int main(){
	Alumno alumno[10];
	int n;
	cout<<"Cuantos estudiantes desea ingresar: ";
	cin>>n;
	
	for(int i=1; i<=n;i++){
		alumno[i].obtener_calificaciones(i);
	}
	for(int i=1;i<=n;i++){
		cout<<"--------------------"<<endl;
		cout<<"Alumno No. "<<i<<endl;
		cout<<"El promedio es: "<<alumno[i].mostrar_promedio()<<endl;
		if(alumno[i].mostrar_promedio()>60){
			cout<<"Aprobado"<<endl;
		}
		else{
			cout<<"Desaprobado"<<endl;
		}
		
	}
}

