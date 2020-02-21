#include <string>
#include <array>
#include <iostream>
#include "pequenafamilia.hpp"
#pragma once

using namespace std;

class starks{
	private:
		string jefe;
		int lobos;
		string animal;
		string lema;
		pequenafamilia soldados[10];
	       	int integrantes;
	public:
		starks();
		starks( string jefe, int lobos, string animal, string lema, int integrantes );
		void setSoldado( pequenafamilia noble, int numero );
		pequenafamilia* getSoldados() { return soldados; };
};
