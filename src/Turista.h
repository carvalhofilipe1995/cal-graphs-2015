#ifndef TURISTA_H_
#define TURISTA_H_

#include <vector>

using namespace std;

class Turista: public Pessoa {
	vector<Pol> pols;
	int id = 0;

public:
	Turista(string nome, int idade) : Pessoa(nome,idade) { id++; };

	vector<Pol> getPols() {return pols;};

	void addPol(Pol p) {pols.push_back(p);};

	void removePol(string nome) {
		for(int i = 0; i <pols.size(); i++)
			if(pols[i].getNome() == nome){
				pols.remove(i);
			}
	};

	int getID() { return id;};
};



#endif /* TURISTA_H_ */
