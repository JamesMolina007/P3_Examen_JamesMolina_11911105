#include <string>

#pragma once

class pequenafamilia{
	private:
		string nombre;
		char simbolo;
		string lema;
		int ataque;
		int defensa;
	public:
		pequenafamilia();
		pequenafamilia( string nombre, char simbolo, string lema, int ataque, int defensa );
/*		void setNombre( string nombre );
		void setSimbolo( char simbolo );
		void setLema( int lema );
		void setAtaque( int ataque );
		void setDefensa( int defensa );
		string getNombre() { return nombre; };
		char getSimbolo() { return simbolo; };
		string getLema() { return lema; };
		int getAtaque() { return ataque; };
		int getDefensa() { return defensa; };*/
};
