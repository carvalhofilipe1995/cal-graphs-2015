/*
 * PoI.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#include "PoI.h"

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

bool PoI::operator==(const PoI &p) {
	if (nome == p.getNome())
		return true;
	return false;
}
