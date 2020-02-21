#include <string>
#include <array>
#pragma once

class targaryen {
	private:
		string reina;
		string animal;
		string lema;
		array< dragones, 10 > soldados;
		int barcos;
	public:
		targaryen();
		targaryen( string reina, string animal, string lema, int barcos );
		void setSoldado( dragones dragon);
};
