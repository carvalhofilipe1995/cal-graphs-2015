/*
 * PoI.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#include "PoI.h"
#include <math.h>

using namespace std;

string PoI::getNome() const {
	return nome;
}

double PoI::getX() const {
	return point.getX();
}

double PoI::getY() const {
	return point.getY();
}

double PoI::distMinima(PoI p){

	return sqrt(pow(getX() - p.getX(), 2) + pow(getY() - p.getY(), 2));

}

bool PoI::operator==(const PoI &p) {
	if (nome == p.getNome())
		return true;
	return false;
}
