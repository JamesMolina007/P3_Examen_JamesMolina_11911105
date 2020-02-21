#include <string>
#include <array>
#include "guardia.hpp"
#pragma once

class lannister(){
	private:
		string nombre;
		string emblema;
		string lema;
		array< guardia, 10 > soldados;
		int dinero;
		int fuerza;
	public:
		lannister();
		lannister( string nombre, string emblema, string lema, int dinero, int fuerza );
		void setSoldado( guardia g );

};
