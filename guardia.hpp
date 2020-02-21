#include <string>

#pragma once

class guardia{
	static const int CABALLERO = 1;
	static const int JINETE = 2;
	static const int ARQUERO = 3;
	private:
		string nombre;
		int ataque;
		int defensa;
	public:
		guardia();
		guardia( string nombre, int ataque, int defensa );
/*		void setNombre( string nombre );
		void setAtaque( int ataque );
		void setDefensa( int defensa );
		string getNombre() { return nombre; };
		int getAtaque() { return ataque; };
		int getDefensa() { return defensa; };

*/
};

