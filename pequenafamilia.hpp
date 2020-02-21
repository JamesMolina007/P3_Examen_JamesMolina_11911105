#include <string>
#include <iostream>
#include <array>
#pragma once
using namespace std;
class pequenafamilia{
	private:
		friend void simulacion();
		string nombre;
		char simbolo;
		string lema;
		int ataque;
		int defensa;
	public:
		pequenafamilia();
		pequenafamilia( string nombre, char simbolo, string lema, int ataque, int defensa );
		void setNombre( string nombre );
		void setSimbolo( char simbolo );
		void setLema( int lema );
		string getNombre() { return nombre; };
		char getSimbolo() { return simbolo; };
		string getLema() { return lema; };
};
