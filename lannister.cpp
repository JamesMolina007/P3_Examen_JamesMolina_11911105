#include <iostream>
#include <array>
#include <string>
#include "lannister.hpp"
#include "guardia.hpp"

using namespace std;


lannister :: lannister(){}


lannister :: lannister( string nombre, string emblema, string lema, int dinero, int fuerza ){
	(*this).nombre = nombre;
	(*this).emblema = emblema;
	(*this).lema = lema;
	(*this).dinero = dinero;
	(*this).fuerza = fuerza;
}

void lannister:: setSoldado( guardia g, int numero ){
	soldados[ numero ] = g;

}
