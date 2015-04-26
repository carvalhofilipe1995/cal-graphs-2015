/*
 * Rua.h
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#ifndef RUA_H_
#define RUA_H_

#include <string>
#include <vector>

using namespace std;

class Rua {
	string nome;
	int size;
	vector<string> connections;
public:
	Rua(string nome, int size, vector<string> c){
		this->nome = nome;
		this->size = size;
		this->connections = c;
	};


	string getNome() {return nome;};
	int getSize() { return size;};
	vector<string> getConnections() { return connections;};

};



#endif /* RUA_H_ */
