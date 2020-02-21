#include <string>
#include <iostream>
#include <array>
#include "dragones.hpp"
#include "targaryen.hpp"


targaryen :: targaryen(){}

targaryen :: targaryen( string reina, string animal, string lema, int barcos ){
	(*this).reina = reina;
	(*this).animal = animal;
	(*this).lema = lema;
	(*this).barcos = barcos;
}

void targaryen :: setSoldado( dragones dragon, int numero ){
	soldados[ numero ] =  dragon;
}
