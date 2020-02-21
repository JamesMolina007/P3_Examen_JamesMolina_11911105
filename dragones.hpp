#include <string>
#pragma once
using namespace std;
class dragones {
	private:
		friend void simulacion();
		string nombre;
		string color;
		int tamano;
		int distancia;
		int ataque;
		int defensa;
	public:
		dragones();
		dragones( string nombre, string color, int tamano, int distancia, int ataque, int defensa );
		void setNombre( string nombre );
		void setColor( string color );
		void setTamano( int tamano );
		void setDistancia( int distancia );
		string getNombre() { return nombre; };
		string getColor() { return color; };
		int getTamano() { return tamano; };
		int getDistancia() { return distancia; };

};
