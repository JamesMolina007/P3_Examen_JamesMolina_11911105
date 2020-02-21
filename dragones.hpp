#include <string>
#pragma once

class dragones {
	private:
		string nombre;
		string color;
		int tamano;
		int distancia;
		int ataque;
		int defensa;
	public:
		dragones();
		dragones( string nombre, string color, int tamano, int distancia, int ataque, int defensa );
/*		void setNombre( string nombre );
		void setColor( string color );
		void setTamano( int tamano );
		void setDistancia( int distancia );
		void setAtaque( int ataque );
		void setDefensa( int defensa );
		string getNombre() { return nombre; };
		string getColor() { return color; };
		int getTamano() { return tamano; };
		int getDistancia() { return distancia; };
		int getAtaque() { return ataque; };
		int getDefensa() { return defensa; };
*/
};
