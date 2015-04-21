#ifndef PESSOA_H_
#define PESSOA_H_

using namespace std;

class Pessoa {
	string nome;
	int idade;
public:
	Pessoa(string nome, int id): nome(nome), idade(id) {};
	string getNome() { return nome;};
	int getIdade() { return idade;};
};



#endif /* PESSOA_H_ */
