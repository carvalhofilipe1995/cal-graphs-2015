#ifndef AUTOCARRO_H
#define AUTOCARRO_H

#include "Tourist.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Autocarro
{
	int capacidade;
	vector<Tourist> turista_a;
public:
	Autocarro(int capacidade);
	int getCapacidade() const;
	void addTurista(Tourist t1);
};


#endif

