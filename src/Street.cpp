/*
 * Street.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#include "Street.h"

using namespace std;

string Street::getNome() const {
	return nome;
}

int Street::getSize() const {
	return size;
}

vector<string> Street::getConnections() const {
	return connections;
}
