#ifndef TURISTA_H_
#define TURISTA_H_

#include "Pol.h"
#include "Pessoa.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Turista: public Pessoa {
	vector<Pol *> pols;


public:
	Turista(string nome, int idade) : Pessoa(nome,idade) {};

	vector<Pol *> getPols() {return pols;};

	void addPol(Pol *p) {pols.push_back(p);};

	void removePol(string nome) {
		for(int i = 0; i <pols.size(); i++)
			if(pols[i]->getNome() == nome){
				pols.erase(pols.begin() + i);
			}
	};

	bool operator==(Turista& t){
		if(getNome() == t.getNome() && getIdade() == t.getIdade())
			return true;
		return false;
	};


};



#endif /* TURISTA_H_ */
