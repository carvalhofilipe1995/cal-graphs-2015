#ifndef SIGHTSEEING_H_
#define SIGHTSEEING_H_

#include "Turista.h"
#include "PoI.h"
#include "Graph.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

class Sightseeing {

	vector<Turista> turistas;
	vector<PoI> poIs;
	Graph<PoI> graph;


public:

	Sightseeing();
	vector<Turista> getTuristas() {return turistas;};
	vector<PoI> getPoIs() {return poIs;};
	void addTurista(Turista t) {turistas.push_back(t);};
	void addPoI(PoI p) { poIs.push_back(p);};

	bool startGraph();


};



#endif /* SIGHTSEEING_H_ */
