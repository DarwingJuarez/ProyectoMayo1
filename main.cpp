#include <iostream>
#include <conio.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	int opcion, promedio, i=0, cantidad=0, nota, j=0;
	int cont=4, aum, c, mayor, menor, a;
	
	int notas[400], suma;
	string nombres[100];
	string nombre, alumno;
	
	do{
	cout<<"***MENU DE OPCIONES***\n";
	cout<<"1: Promedio\n";
	cout<<"2: Nota Maxima\n";
	cout<<"3: Nota Minima\n";
	cout<<"4: Agregar Alumno y sus Notas\n";
	cout<<"5: Mostrar lista de alumnos\n";
	cout<<"0: Salir\n";
	
	cout<<"\nIngresa la opcion que desee realizar: ";
	cin>>opcion;
		
	switch(opcion)
	{
	case 1:
		system("cls");
		c=0;
		aum=4;
		cout<<"**PROMEDIO**\n"; 
			for(i=0; i<cantidad; i++){
				for(j=c; j<aum; j++){
				suma=suma+notas[j];	
			}
			promedio = suma/4;
			c += 4;
			aum += 4;
			cout<<nombres[i]<<" tiene un promedio de: "<<promedio;
			cout<<endl;
			suma=0;		
		}
	
		cout<<endl;
		system("pause");
		system("cls");
	break;
	
	
	case 2: 
		system("cls");
		c=0;
		aum=4;
		cout<<"**NOTA MAXIMA**\n"; 
			for(i=0; i<cantidad; i++)
			{
				mayor=0;	
				for(j=c; j<aum; j++){
			
				if(notas[j] > mayor){
				mayor=notas[j];
			}	
			}
			
			c += 4;
			aum += 4;
			cout<<"La nota maxima de "<<nombres[i]<<" es: "<<mayor;	
			cout<<endl;	
		}
	
		cout<<endl;
		system("pause");
		system("cls");
	break;
	
	
	case 3: 
	
		system("cls");
		c=0;
		aum=4;
		
		cout<<"**NOTA MINIMA**\n"; 
			for(i=0; i<cantidad; i++)
			{
				menor=100;
				
				for(j=c; j<aum; j++)
				{
			
					if(notas[j] < menor)
					{
						menor=notas[j];
					}	
				}
			
					c += 4;
					aum += 4;
			
					cout<<"La nota minima de "<<nombres[i]<<" es: "<<menor;	
					cout<<endl;	
			}
	
		cout<<endl;
		system("pause");
		system("cls");
		
	break;
	
	
	case 4: 
	
		system("cls");
		cout<<"**AGREGAR ALUMNO Y SUS NOTAS**\n";
		cout<<"Ingrese nombre del alumno: ('_' en lugar del espacio)\n";
		cin>>nombre;
		nombres[i]=nombre;
		i++;
		
		cout<<"Ingrese las cuatro notas finales del alumno:\n";
	
		while(j != (cont))
		{
			cin>>nota;
			notas[j]=nota;
			j++;
		}
		cont = cont+4;
		
		
		cantidad++;
		cout<<endl;
		
		system("pause");
		system("cls");  
		
	break;
	
	
	case 5: 
	
		c=0;
		aum=4;
		
		system("cls");
		
		cout<<"**MOSTRAR LISTA DE ALUMNOS**\n";
		 
		for(i=0; i<cantidad; i++)
		{
			cout<<"NOMBRE: "<<nombres[i];
			cout<<endl;
			cout<<"NOTAS: ";
			
			for(j=c; j<aum; j++)
			{
				cout<<notas[j]<<"  ";
			}
			
			c += 4;
			aum += 4;
			cout<<endl<<endl;
		}
			
		cout<<endl;
		system("pause"); 
		system("cls");  
		
	break;
	
	
	default: 
	
		system("cls");
		
		if(opcion == 0)
		{
			cout<<"GRACIAS POR USAR NUESTRO MENU"<<endl;
			system("pause");
		}
		else
		{
			cout<<"Esa opcion no esta en nuestro menu"<<endl; 
			system("pause");
			system("cls");  
		}
		
	break;
	}
	
	
	
	}while(opcion!=0);
	
	
	getch();
	return 0;
}
