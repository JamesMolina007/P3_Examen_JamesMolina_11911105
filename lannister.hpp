#include <string>
#include <array>
#include <iostream>
#include "guardia.hpp"
#pragma once

using namespace std;


class lannister{
	private:
		string nombre;
		string emblema;
		string lema;
		guardia soldados[10];
		int dinero;
		int fuerza;
	public:
		lannister();
		lannister( string nombre, string emblema, string lema, int dinero, int fuerza );
		void setSoldado( guardia g, int numero );
		guardia* getSoldados() { return soldados; };
};
