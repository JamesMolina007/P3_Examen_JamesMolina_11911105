#include <string>
#include <array>
#include <iostream>
#include "dragones.hpp"
#pragma once

class targaryen {
	private:
		string reina;
		string animal;
		string lema;
		dragones soldados[10];
		int barcos;
	public:
		targaryen();
		targaryen( string reina, string animal, string lema, int barcos );
		void setSoldado( dragones dragon, int numero);
		dragones* getDragones() { return soldados; };
};
