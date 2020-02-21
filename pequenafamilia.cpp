#include <string>
#include <iostream>
#include <array>
#include "pequenafamilia.hpp"

using namespace std;

pequenafamilia :: pequenafamilia(){}

pequenafamilia :: pequenafamilia( string nombre, char simbolo, string lema, int ataque, int defensa ) {
	(*this).nombre = nombre;
	(*this).simbolo = simbolo;
	(*this).lema = lema;
	(*this).ataque = ataque;
	(*this).defensa = defensa;
}


