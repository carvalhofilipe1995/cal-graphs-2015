#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>

using namespace std;

class Pessoa {
	string nome;
	int idade;
public:
	Pessoa(string nome, int id): nome(nome), idade(id) {};
	string getNome() { return nome;};
	int getIdade() { return idade;};

	bool operator== (Pessoa& p){
		if(nome == p.getNome() && idade == p.getIdade())
			return true;
		return false;
	};

};



#endif /* PESSOA_H_ */
