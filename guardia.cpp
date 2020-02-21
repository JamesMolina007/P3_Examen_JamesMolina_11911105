#include <string>
#include <iostream>
#include <array>
#include "guardia.hpp"

using namespace std;


guardia :: guardia(){
}

guardia :: guardia( string nombre, int tipo, int edad, int ataque, int defensa ){
	(*this).nombre = nombre;
	(*this).edad = edad;
	(*this).ataque = ataque;
	(*this).defensa = defensa;
}


