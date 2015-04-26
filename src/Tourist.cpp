/*
 * Tourist.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

#include "Tourist.h"

using namespace std;


string Tourist::getNome() const{
	return nome;
}

int Tourist::getIdade() const{
	return idade;
}

vector<PoI> Tourist::getPoIs() const{
	return poIs;
}

void Tourist::addPoI(PoI p){
	poIs.push_back(p);
}


bool Tourist::operator==(const Tourist &t){
	if(nome == t.getNome() && idade == t.getIdade())
		return true;
	return false;
}
