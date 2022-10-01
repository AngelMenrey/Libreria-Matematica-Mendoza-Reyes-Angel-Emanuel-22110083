//ANGEL EMANUEL MENDOZA REYES
//22110083
//GRUPO 2 O
//PROGRAMACION ORIENTADA A OBJETOS 
//PARCIAL 2
//MANUEL MORALES MEDINA 
//CETI COLOMOS
#include <iostream>
#include <math.h>
#define PI 3.1416
using namespace std;
class Calculator{
	private:
			short int Fa,Ca,Fb,Cb,i,j,k;
				float num,seno,coseno,tangente,gra;
					public:
					void multiplicar_matriz();
						void grados_trigo();
							void radianes_trigo();
};
//CONSTRUCTOR MULTIPLICACION DE MATRICES
void Calculator::multiplicar_matriz(){
	short int Fa,Ca,Fb,Cb,i,j,k;
//CAPTURA DE DATOS FILAS Y COLUMNAS DE A , B
	cout<<"INGRESE EL NUMERO DE FILAS EN A:"<<endl;
		cin>>Fa;
		cout<<"INGRESE EL NUMERO DE COLUMNAS EN A:"<<endl;
			cin>>Ca;	
				cout<<"INGRESE EL NUMERO DE FILAS EN B:"<<endl;
						cin>>Fb;
							cout<<"INGRESE EL NUMERO DE COLUMNAS EN B:"<<endl;
									cin>>Cb;
//RELLENADO DE LA MATRIZ 
int A[Fa][Ca], B[Fb][Cb], C[Fa][Cb];
	if (Ca==Fb){
		cout<<"INGRESE LOS DATOS DE A: "<<endl;
		for(i=0; i<Fa; i++)
		for(j=0; j<Ca; j++){
			cout<<"A["<<i<<"] ["<<j<<"] : "<<endl;
			cin>>A[i][j];
		}
		cout<<"INGRESE LOS DATOS DE B: "<<endl;
		for(i=0; i<Fb; i++)
		for(j=0; j<Cb; j++){
			cout<<"B["<<i<<"] [ "<<j<<"] : "<<endl;
			cin>>B[i][j];
		}
			//OPERACION DE LA MULTIPLICACION 
			for (i=0; i<Fa; i++)
				for (j=0; j<Cb; j++){
					C[i][j]=0;
					for (k=0; k<Ca; k++)
					C[i][j]+=A[i][k]*B[k][j];
				}
				cout<<endl;
				for (i=0; i<Fa; i++){
					for (j=0; j<Cb; j++){
						cout<<C[i][j]<<" ";
					}
					cout<<endl;
				}
					
					
	}
	else{
		cout<<"LA MULTIPLICACION DE LAS MATRICES NO SE PUEDE REALIZAR"<<endl;
	}
}
//CONSTRUCTOR FUNCIONES TRIGONOMETRICAS EN GRADOS
void Calculator::grados_trigo(){
	cout<<"INGRESE UN NUMERO"<<endl;
	cin>>num;
	gra = num*PI/180;
	seno = sin(gra);
	coseno = cos(gra);
	tangente = tan(gra);
	cout<<"EL SENO ES : "<<seno<<endl;
	cout<<"EL COSENO ES: "<<coseno<<endl;
	cout<<"LA TANGENTE ES: "<<tangente<<endl;
	
}
//CONSTRUCTOR DE FUNCIONES TRIGONOMETRICAS EN RADIANES
void Calculator::radianes_trigo(){
	cout<<"INGRESE UN NUMERO"<<endl;
	cin>>num;
	seno=sin(num);
	coseno=cos(num);
	tangente=tan(num);
	cout<<"EL SENO ES: "<<seno<<endl;
	cout<<"EL COSENO ES : "<<coseno<<endl;
	cout<<"LA TANGENTE ES : "<<tangente<<endl;
}

int main (){
	Calculator matriz;
	int opc;
	int continuar=1;
	while (continuar!=0){
    cout<<"BIENVENIDO A LA CALCULADORA"<<endl;
	cout<<"INGRESE LA OPCION QUE DESEE REALIZAR: "<<endl;
	cout<<"1- MULTIPLICAR MATRICES "<<endl;
	cout<<"2- FUNCIONES TRIGONOMETRICAS EN GRADOS"<<endl;
	cout<<"3- FUNCIONES TRIGONOMETRICAS EN RADIANES"<<endl;
	cin>>opc;
	switch(opc){
		case 1:
			matriz.multiplicar_matriz();
				break;
			case 2:
				matriz.grados_trigo();
					break;
				case 3:
				matriz.radianes_trigo();
					break;
		}
	        cout<<"1-DESEA CONTINUAR MENU"<<endl;
	        cout<<"0-DESEAS SALIR DEL MENU"<<endl;
				cin>>continuar;
					if(continuar > 1){
						cout<<"LA OPCION NO ES VALIDA ASI QUE SALDRA AUTOMATICAMENTE"<<endl;
				    		continuar=0;
					}
	}
	return 0;
}
