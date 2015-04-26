/*
 * PoI.h
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#ifndef POI_H_
#define POI_H_

#include "Street.h"
#include "Point.h"
#include <string>

using namespace std;

class PoI {

	string nome;
	Point point;

public:
	PoI(string nome, Point p){
		this->nome = nome;
		this->point = p;
	};
	string getNome() const;
	double getX() const;
	double getY() const;
	bool operator==(const PoI &p);

};



#endif /* POI_H_ */
