#include <string>
#include <array>
#include "pequenafamilia.hpp"
#pragma once

class starks{
	private:
		string jefe;
		int lobos;
		string animal;
		string lema;
		array < pequenafamilia, 10 > soldados;
	       	int integrantes;
	public:
		starks():
		starks( string jefe, int lobos, string animal, string lema, int integrantes );
		void setSoldado( pequenafamilia noble );

};
