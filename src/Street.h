/*
 * Street.h
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#ifndef STREET_H_
#define STREET_H_

#include <string>
#include <vector>

using namespace std;

class Street {

	string nome;
	int size;
	vector<string> connections;

public:
	Street();

	Street(string nome, int s, vector<string> connects){
		this->nome = nome;
		this->size = s;
		this->connections = connects;
	};

	string getNome() const;
	int getSize() const;
	vector<string> getConnections() const;
};


#endif /* STREET_H_ */
