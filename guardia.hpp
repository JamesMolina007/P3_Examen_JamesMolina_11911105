#include <string>

#pragma once

using namespace std;


class guardia{
	private:
		friend void simulacion();
		string nombre;
		int edad;
		int tipo;
		int ataque;
		int defensa;
	public:
		static const int CABALLERO = 1;
        	static const int JINETE = 2;
       	 	static const int ARQUERO = 3;
		guardia();
		guardia( string nombre,int tipo, int edad ,int ataque, int defensa );
		void setNombre( string nombre );
		int getEdad() { return edad; };
		string getNombre() { return nombre; };
		


};

