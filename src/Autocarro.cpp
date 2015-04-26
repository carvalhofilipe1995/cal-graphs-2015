#include "Autocarro.h"

Autocarro::Autocarro(int capacidade)
{
	this->capacidade = capacidade;
}

// -----

int Autocarro::getCapacidade() const
{
	return this->capacidade;
}


void Autocarro::addTurista(Tourist t1)
{
	turista_a.push_back(t1);
}

