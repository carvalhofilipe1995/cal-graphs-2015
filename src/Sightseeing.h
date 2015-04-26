/*
 * Sightseeing.h
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#ifndef SIGHTSEEING_H_
#define SIGHTSEEING_H_

#include "PoI.h"
#include "Graph.h"
#include "Tourist.h"
#include "Street.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;

class Sightseeing {

	vector<PoI> interestPoints;
	vector<Tourist> tourists;
	vector<Street> streets;

public:

	Sightseeing();
	bool startGraph();
	bool showGraph();



};



#endif /* SIGHTSEEING_H_ */
