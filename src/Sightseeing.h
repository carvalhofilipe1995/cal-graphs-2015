#ifndef SIGHTSEEING_H_
#define SIGHTSEEING_H_

#include "Turista.h"
#include "Pol.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

class Sightseeing {

	vector<Turista*> turistas;
	vector<Pol*> pols;


public:

	Sightseeing();
	vector<Turista*> getTuristas() {return turistas;};
	vector<Pol*> getPols() {return pols;};


};



#endif /* SIGHTSEEING_H_ */
