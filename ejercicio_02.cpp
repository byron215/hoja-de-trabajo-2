#include <iostream>
#include <string.h> 
using namespace std;
struct NOTAS{
	float mat,esp,pro,Notmayor;
};
 
struct ALUMNO{
	short numero;
	string nombre;
	short edad;
	float est;
	NOTAS nota;
};
 
int main(int argc, char** argv) {
	short cantAlum;
	cout<<"Cantidad de alumnos: ";cin>>cantAlum;
	ALUMNO alumnos[cantAlum];
	float proMat=0,proEsp=0,proPro=0;// variables para el promedio
	for(int i=0;i<cantAlum;i++){
		cout<<"ALUMNO "<<i+1<<endl;
		cout<<"\tNúmero de indentificasion: ";cin>>alumnos[i].numero;
		cout<<"\tNombre: ";cin>>alumnos[i].nombre;
		
		cout<<"\tNOTAS:\n";
		cout<<"\t-----------\n";
		cout<<"\t\tMatemática: ";cin>>alumnos[i].nota.mat;
		cout<<"\t\tEspañol: ";cin>>alumnos[i].nota.esp;
		cout<<"\t\tProgramación: ";cin>>alumnos[i].nota.pro;
		 if (alumnos[i].nota.mat<alumnos[i].nota.esp,alumnos[i].nota.pro<alumnos[i].nota.esp) {
 	cout<<"nota mas alta: espanol";
 }
 if (alumnos[i].nota.mat<alumnos[i].nota.pro,alumnos[i].nota.esp<alumnos[i].nota.pro){
 	cout<<"nota mas alta: programacion";
 }
 if (alumnos[i].nota.esp<alumnos[i].nota.mat,alumnos[i].nota.pro<alumnos[i].nota.mat){
 	cout<<"nota mas alta: matematica";
 }


	cout<<"\npromedio: "<<(alumnos[i].nota.mat+alumnos[i].nota.esp+alumnos[i].nota.pro)/3;
		cout<<"\n_____________________________________\n";

 
		proMat+=alumnos[i].nota.mat;
		proEsp+=alumnos[i].nota.esp;
		proPro+=alumnos[i].nota.pro;
	}
	int notaAprob;
	cout<<"Mínimo para aprobar: ";cin>>notaAprob;
	cout<<"Alumnos desaprobados\n";
	for(int i=0;i<cantAlum;i++){
		if(alumnos[i].nota.mat<notaAprob){
			cout<<"\tMatemática: "<<alumnos[i].nombre<<endl;
		}
			if(alumnos[i].nota.esp<notaAprob){
			cout<<"\tEspañol: "<<alumnos[i].nombre<<endl;
		}
			if(alumnos[i].nota.pro<notaAprob){
			cout<<"\tProgramación: "<<alumnos[i].nombre<<endl;
		}
	}
	int totalDesap;
	totalDesap=0;
	cout<<"Desaprobados en Maetemática\n";
	for(int i=0;i<cantAlum;i++){
		if(alumnos[i].nota.mat<notaAprob){
			cout<<alumnos[i].nombre<<endl;
			totalDesap++;
		}
	}
	cout<<"Total de Desaprobados en Maetemática: "<<totalDesap<<endl;
	cout<<"___________________________________________\n";
	totalDesap=0;
	cout<<"Desaprobados en Español\n";
	for(int i=0;i<cantAlum;i++){
		if(alumnos[i].nota.esp<notaAprob){
			cout<<alumnos[i].nombre<<endl;
			totalDesap++;
		}
 
	}
		cout<<"Total de Desaprobados en Español: "<<totalDesap<<endl;
	cout<<"___________________________________________\n";
	totalDesap=0;
	cout<<"Desaprobados en Programación\n";
	for(int i=0;i<cantAlum;i++){
		if(alumnos[i].nota.esp<notaAprob){
			cout<<alumnos[i].nombre<<endl;
			totalDesap++;
		}
	}
	cout<<"Total de Desaprobados en Programación: "<<totalDesap<<endl;
	cout<<"___________________________________________\n";
	cout<<"Nota promedio\n";
	cout<<"\tMatemática: "<<proMat/cantAlum<<endl;
	cout<<"\tEspañol: "<<proEsp/cantAlum<<endl;
	cout<<"\tProgramación: "<<proPro/cantAlum<<endl;
	cout<<"___________________________________________\n";
	return 0;
}