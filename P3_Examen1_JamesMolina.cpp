#include <iostream>
#include <string>
#include <array>
#include "pequenafamilia.hpp"
#include "dragones.hpp"
#include "guardia.hpp"
#include "starks.hpp"
#include "lannister.hpp"
#include "targaryen.hpp"

using namespace std;

int contL, contS, contT;
lannister l;
targaryen t;
starks s;
bool lcreado = true, tcreado = true, screado = true;

void agregarStarks(){
	string nombre;
	char simbolo;
	string lema;
	int ataque;
	int defensa;
	if( contS < 10 ){
		cout << "Ingrese nombre: ";
		cin >> nombre;
		cout << "Ingrese simbolo: ";
		cin >> simbolo;
		cout << "Ingrese lema: ";
		cin >> lema;
		cout << "Ingrese ataque: ";
		cin >> ataque;
		cout << "Ingrese defensa: ";
		cin >> defensa;
		pequenafamilia pf( nombre, simbolo, lema, ataque, defensa );
		s.setSoldado( pf, contS );
		contS++;
	}else
		cout << "El ejercito ya esta lleno" << endl;
}

void agregarLannister(){
	string nombre;
	int tipo, edad, ataque, defensa;
	if( contL < 10 ){
		cout << "Ingrese Nombre: ";
		cin >> nombre;
		do{
		cout << "1- Caballero \n2- Jinete \n3- Arquero \nIngrese la opcion: ";
		cin >> tipo;
		}while ( tipo < 1 || tipo > 3 );
		cout << "Ingrese el ataque: ";
		cin >> ataque;
		cout << "Ingrese defensa: ";
		cin >> defensa;
		cout << "Ingrese la edad: ";
		cin >> edad;
		guardia g;
		if( tipo == 1 ){
		       	guardia g2( nombre, guardia::CABALLERO, edad, ataque, defensa );
		       	g = g2;	
		}
		if( tipo == 2 ){
                        guardia g3( nombre, guardia::JINETE, edad, ataque, defensa );
                        g = g3;
                }
		if( tipo == 3 ){
                        guardia g4( nombre, guardia::ARQUERO, edad, ataque, defensa );
                        g = g4;
                }
		l.setSoldado( g, contL );
		contL++;
	}else
		cout << "El ejercito ya esta lleno! " << endl;
}

void agregarTargaryen(){
	if( contT < 10 ){
		string nombre, color;
		int tamano, distancia, ataque, defensa;
		cout << "Ingrese nombre: ";
		cin >> nombre;
		cout << "Ingrese color: ";
		cin >> color;
		cout << "Ingrese tamaño: ";
		cin >> tamano;
		cout << "Ingrese distancia de la llama de fuego: ";
		cin >> distancia;
		cout << "Ingrese ataque: ";
		cin >> ataque;
		cout << "Ingrese defensa: ";
		cin >> defensa;
		dragones d( nombre, color, tamano, distancia, ataque, defensa );
		t.setSoldado( d, contT );
		contT++;
	} else
		cout << "El ejercito ya esta lleno! ";
}


void listar(){
	int opcion;
	cout << "1- Starks \n2- Lannister \n3- Targaryen \nIngrese la opcion: ";
	cin >> opcion;
	switch ( opcion ){
		case 1:{
			       cout << endl << endl << "Pequeñas familias nobles---" << endl;
				pequenafamilia* lista0;
				lista0 = s.getSoldados();
				 for( int i = 0; i < 10 ; i++ ){
                                 if( lista0[i].getNombre() != "" ){
                                        cout << endl << endl;
                                        cout << "Familia #" << (i+1) << endl;
                                        cout << "Nombre: " << lista0[i].getNombre() << endl;
                                        cout << "Simbolo: " << lista0[i].getSimbolo() << endl;
					cout << "Lema: " << lista0[i].getLema() << endl;
                                 }
                               }

			       
			       break;
		       }
		case 2:{
			       cout << endl << endl << "Guardias---" << endl;
			       guardia* lista;
			       lista = l.getSoldados();
			       for( int i = 0; i < 10 ; i++ ){
				 if( lista[i].getNombre() != "" ){
					cout << endl << endl;
					cout << "Guardia #" << (i+1) << endl;
					cout << "Nombre: " << lista[i].getNombre() << endl;
				 }
			       }
				break;
		       }
		case 3:{
			       cout << endl << endl << "Dragones---" << endl;
                               dragones* lista2;
                               lista2 = t.getDragones();
                               for( int i = 0; i < 10 ; i++ ){
                                 if( lista2[i].getNombre() != "" ){
                                        cout << endl << endl;
                                        cout << "Dragon #" << (i+1) << endl;
                                        cout << "Nombre: " << lista2[i].getNombre() << endl;
                                        cout << "Color: " << lista2[i].getColor() << endl;
					cout << "Tamaño: " << lista2[i].getTamano() << endl;
					cout << "Distancia de llama de fuego: " << lista2[i].getDistancia() << endl;
                                 }
                               }
                                break;
		       }
	}

}

void fijarT( targaryen t3 ){
	if( tcreado ){
		t = t3;
		tcreado = false;
	}else
		cout << "La familia Targaryen ya ha sido creada!" << endl;
}

void fijarL( lannister l3 ){
	if( lcreado ){
		l = l3;
		lcreado = false;
	}else
		cout << "La familia Lannister ya ha sido creada!" << endl;
}

void fijarS( starks s3 ){
	if( screado ){
		s = s3;
		screado = false;
	}else
		cout << "La familia stark ya ha sido creada!" << endl;
}


void simulacion(){
        pequenafamilia* lista0;
        lista0 = s.getSoldados();
        guardia* lista1;
        lista1 = l.getSoldados();
        dragones* lista2;
        lista2 = t.getDragones();
	int b1, b2;
	int ataque1 = 0, ataque2 = 0;
	int defensa1 = 0, defensa2 = 0;
	cout << "1. Starks \n2. Lannister \n3. Targaryen \nIngrese batallante 1: ";
	cin >> b1;
	cout << "1. Starks \n2. Lannister \n3. Targaryen \nIngrese batallante 2: ";
        cin >> b2;
	if( b1 != b2 ){
		if( b1 == 1 ) {
			for( int i = 0; i< 10; i++ ){
				if( lista0[i].getNombre() != "" ){
					ataque1 += lista0[i].ataque;
					defensa1 += lista0[i].defensa;
				}
			}
		}
		if( b1 == 2 ) {
			 for( int i = 0; i< 10; i++ ){
				 if( lista1[i].getNombre() != "" ){
				 	defensa1 += lista1[i].defensa;
                                	ataque1 += lista1[i].ataque;
                   		 }
			 }
		}
		if( b1 == 3 ) {
                         for( int i = 0; i< 10; i++ ){
                                if( lista2[i].getNombre() != "" ){	
				 	ataque1 += lista2[i].ataque;
					defensa1 += lista2[i].defensa;
				}
                        }
                }
		if( b2 == 1 ) {
                        for( int i = 0; i< 10; i++ ){
				if( lista0[i].getNombre() != "" ){
                                	ataque2 += lista0[i].ataque;
					defensa1 += lista0[i].defensa;
				}
                        }
                }
                if( b2 == 2 ) {
                         for( int i = 0; i< 10; i++ ){
				if( lista1[i].getNombre() != "" ){	 
				 	defensa2 += lista1[i].defensa;
                                	 ataque2 += lista1[i].ataque;
				}
                        }
                }
       
	       if( b2 == 3 ) {
                        for( int i = 0; i< 10; i++ ){
				if( lista0[i].getNombre() != "" ){
					defensa2 += lista2[i].defensa;
                                	ataque2 += lista2[i].ataque;
				}
                        }
                }
		
	} else
	cout << "Debe escoger ejercitos distintos! " << endl;
	while( defensa1 > 0 && defensa2 > 0 ){
		cout << "********************" << endl;
		cout << "Ejercito 1: " << endl;
		cout << "	Vida: " << defensa1 << endl;
		cout << "	Ataque: " << ataque1 << endl << endl;
		if( defensa1 > 0 ) defensa2 -= ataque1;
		else cout << endl << "EL EJERCITO 1 HA GANADO!!! " << endl;
		cout << "Ejercito 2: " << endl;
		cout << "	Vida: " << defensa2 << endl;
		cout << "	Ataque: " << ataque2 << endl << endl;
		if( defensa2 > 0 ) defensa1 -= ataque2;
		else cout << endl << "EL EJERCITO 2 HA GANADO!!! " << endl;
		
	}


}


int main(){
	int opcion;
	do{
		cout << endl << endl;
		cout << "--- MENU ---" << endl;
		cout << "0. Salir" << endl;
		cout << "1. Agregar Familia" << endl;
		cout << "2. Agregar Ejercito" << endl;
		cout << "3. Simulacion" << endl;
		cout << "4. Listar" << endl;
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		cout << endl << endl;
		string jefe, animal, lema;
		int integrantes;
		switch ( opcion ){
			case 1:{
				int familia;
				cout << "1. Starks \n2. Lannister \n3. Targaryen\nIngrese la opcion: ";
				cin >> familia;
				switch ( familia ){
					case 1:{
						if( screado ){
							int lobos;
							cout << "Ingrese el jefe de la familia: ";
							cin >> jefe;
							cout << "Ingrese la cantidad de lobos huargos: ";
							cin >> lobos;
							cout << "Ingrese el animal emblema: ";
							cin >> animal;
							cout << "Ingrese el lema: ";
							cin >> lema;
							cout << "Ingrese la cantidad de integrantes: ";
							cin >> integrantes;
							starks s2( jefe, lobos, animal, lema, integrantes );
							fijarS( s2 );
						} else
							cout << "La familia Starks ya fue creada!" << endl;
						break;
					       }
					   case 2:{
						if( lcreado ){
							int dinero;
							int fuerza;
							cout << "Ingrese el jefe de la familia: ";
			      				cin >> jefe;
							cout << "Ingrese el animal emblema: ";
							cin >> animal;
							cout << "Ingrese el lema: ";
							cin >> lema;
							cout << "Ingrese el dinero: ";			
							cin >> dinero;
							cout << "Ingrese la fuerza de la montaña: ";
							cin >> fuerza;
							lannister l2( jefe, animal, lema, dinero, fuerza );
							fijarL( l2 );
							lcreado = false;
						}else
							cout << "La familia Lannister ya fue creada!" << endl;
						break;
						 }
					case 3:{
						if( tcreado ){
							int barcos;
							cout << "Ingrese la reina: ";
							cin >> jefe;
							cout << "Ingrese el animal emblema: ";
							cin >> animal;
							cout << "Ingrese el lema: ";
							cin >> lema;
							cout << "Ingrese la cantidad de barcos: ";
							cin >> barcos;
							targaryen t2( jefe, animal, lema, barcos );
							fijarT( t2 );
							tcreado = false;
						}else
							cout << "La familia Targaryen ya fue creada!" << endl;
						break;
					       }

				}	
				break;
			       }
			case 2: {
				int agregara;
				cout << endl << endl;
				cout << "1. Starks \n2. Lannister \n3. Targaryen \nIngrese la opcion: ";
				cin >> agregara;
				if( agregara == 1 ) agregarStarks();
				if( agregara == 2 ) agregarLannister();
				if( agregara == 3 ) agregarTargaryen();
				break;
				}
			case 3:{
				simulacion();
				break;
			       }
			case 4:{
				listar();
				break;
			       }


		}

	}while ( opcion );

}
