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
	void addTurista(Turista *t) {turistas.push_back(t);};
	void addPol(Pol *p) { pols.push_back(p);};


};



#endif /* SIGHTSEEING_H_ */
