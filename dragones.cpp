#include <iostream>
#include <array>
#include <string>
#include "dragones.hpp"

using namespace std;


dragones :: dragones(){
}

dragones :: dragones( string nombre, string color, int tamano, int distancia, int ataque, int defensa ){
	(*this).nombre = nombre;
	(*this).color = color;
	(*this).tamano = tamano;
	(*this).distancia = distancia;
	(*this).ataque = ataque;
	(*this).defensa = defensa;
}


