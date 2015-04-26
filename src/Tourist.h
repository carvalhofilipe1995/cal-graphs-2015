/*
 * Tourist.h
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#ifndef TOURIST_H_
#define TOURIST_H_

#include "PoI.h"
#include <string>
#include <vector>

using namespace std;

class Tourist {

	string nome;
	int idade;
	vector<PoI> poIs;

public:
	Tourist(string nome, int id){
		this->nome = nome;
		this->idade = id;
	};
	string getNome() const;
	int getIdade() const;
	vector<PoI> getPoIs() const;
	void addPoI(PoI p);
	bool operator==(const Tourist &t);


};



#endif /* TOURIST_H_ */
