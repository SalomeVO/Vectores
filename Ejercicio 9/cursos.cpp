
//Declaracion de librerias
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	//Declaracion de variables
	int curso1[5], curso2[5];
	int op=0;  
	float prom1=0, prom2=0, suma1=0, suma2=0;
	
	do{
		system("color B0"); //Color de la pantalla
		
		             //Visualzar menu de opciones.
		cout<<"\n****************************************************";
		cout<<"\n*                 Menu Principal                   *";
		cout<<"\n****************************************************";
		cout<<"\n* 1. Ingreso de datos de los curos                 *";
		cout<<"\n* 2. Visualizacion de la primera nota del Vector 1 *";
		cout<<"\n* 3. Visualizacion de la ultima nota del vector 2  *";
		cout<<"\n* 4. Calculos de los promedio de los cursos        *";
		cout<<"\n* 5. Visuaizar calculos y vectores                 *";
		cout<<"\n* 6. Finalizar                                     *";
		cout<<"\n****************************************************";
		cout<<"\n \n Ingrese la opcion que deasea realizar: "; cin>>op; //Leer opcion del usuario 
		
		if(op<1 || op>6){ system("color 40"); //Color de pantalla
		//Mensaje de error si el usuario elige un numero que no esta en el menu
		cout<<"\n *********************************************";
		cout<<"\n * EL NUMERO QUE USTED INGRESO ES INCORRECTO *"; 
		cout<<"\n *********************************************"; _getch(); } //fin de if.
		
		switch (op){
			
			case 1: { system("cls"); //Limpiar pantalla
			
			cout<<"\n              *INGRESO DE DATOS*             "; //Titulo de la opcion 
			
			//Primer curso
			for(int i=0; i<5; i++){
				cout<<"\n Ingrese las notas del primer curso"<<endl; cin>>curso1[i];
			}
			
			//Segundo curso
			cout<<"\n Ingreso De Datos Del Curso 2"<<endl;
			for(int j=0; j<5; j++){
				cout<<"\n Ingrese las notas del segundo curso"<<endl; cin>>curso2[j];
			}	break; } //fin de case.
			
			case 2:{ system("cls"); //Limpiar pantalla
			
			cout<<"\n * VISUALIZACION DE LA PRIMERA NOTA DEL VECTO 1 *"<<endl; //Titulo de la opcion
			
			cout<<"El numero de la posicion [0] del vector 1 es: "<<curso1[0]; //Posicion de la nota del vector
			_getch();	break; } //fin case 1.
				
				
			case 3:{ system("cls"); //Limpiar pantalla
			
			cout<<"\n * VISUALIZACION DE LA ULTIMA NOTA DEL VECTO 2 *"<<endl; //Titulo de la opcion
			
			cout<<"El numero de la posicion [4] del vector 2 es: "<<curso2[4]; //Posicion de la nota del vector
			_getch();	break; } //fin case 2.
				
			case 4: { system("cls"); //Limpiar pantalla
			
			//Mensaje al usuario
			cout<<"\n";
			cout<<"\n ***********************";
			cout<<"\n * Calculos Realizados *";
			cout<<"\n ***********************";
			
			//Promedio del primer vector
			for(int i=0; i<5; i++){
				suma1 += curso1[i]; } //Para sumar las notas del cuso 1
			
			prom1= suma1/5; //promedio del cuso 1
			
			//Promedio del segundo vector
			for (int j=0; j<5; j++){
				suma2 += curso2[j];	} //Suma de las notas del cuso 2
				
			prom2= suma2/5; //Promedio del curso 2
			_getch(); break; } //fin del case 4
			
			
			case 5: { system("cls"); //Limpiar pantalla
			
			cout<<"*VISUALIZACION*"<<endl; //Titulo
			
			//Vector 1
			cout<<"\n Curso Uno"<<endl;
			for(int i=0; i<5; i++){
				
				cout<<curso1[i]<<endl; //Visualizacion de las notas
			}
			//Visualizacion del promedio
			cout<<"\n El promedio del primer curso es: "<<prom1;
			
			//Vector 2
			cout<<"\n\nCurso Dos"<<endl;
			for(int j=0; j<5; j++){
				cout<<curso2[j]<<endl; //Visualizacion de las notas
			}
			//Visualizacion del promedio
			cout<<"\n El promedio del segundo curso es: "<<prom2;
			
			_getch(); break; }//fin case 5
				
		}//fin del switch 
		 system("cls"); //Limpiar pantalla y volver al menu
		 
	}//fin de do
	 while(op!=6);
	 
}//Fin del programa

