#include <iostream>
#include <string>
#include <array>
#include "pequenafamilia.hpp"
#include "starks.hpp"

using namespace std;

starks :: starks(){}

starks :: starks( string jefe, int lobos, string animal, string lema, int integrantes ){
	(*this).jefe = jefe;
	(*this).lobos = lobos;
	(*this).animal = animal;
	(*this).lema = lema;
	(*this).integrantes = integrantes;
}

void starks :: setSoldado( pequenafamilia noble, int numero ){
	soldados[ numero ] = noble;
}


