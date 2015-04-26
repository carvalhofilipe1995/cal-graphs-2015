#ifndef TURISTA_H_
#define TURISTA_H_

#include "PoI.h"
#include "Pessoa.h"
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Turista: public Pessoa {
	vector<PoI> poIs;


public:
	Turista(string nome, int idade) : Pessoa(nome,idade) {};

	vector<PoI> getPols() {return poIs;};

	void addPoI(PoI p) {poIs.push_back(p);};

	void removePoI(string nome) {
		for(int i = 0; i <poIs.size(); i++)
			if(poIs[i].getNome() == nome){
				poIs.erase(poIs.begin() + i);
			}
	};

	bool operator==(Turista& t){
		if(getNome() == t.getNome() && getIdade() == t.getIdade())
			return true;
		return false;
	};


};



#endif /* TURISTA_H_ */
