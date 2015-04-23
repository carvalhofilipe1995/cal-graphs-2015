#ifndef POL_H_
#define POL_H_

#include <string>
#include <iostream>

using namespace std;

class Pol {
	int x;
	int y;
	string nome;
public:

	Pol(int x, int y, string nome) : x(x), y(y), nome(nome){};
	int getX() {return x;};
	int getY() {return y;};
	string getNome() {return nome;};

	bool operator==(Pol& p){
		if(x == p.getX() && y == p.getY())
			return true;
		return false;
	};

};



#endif /* POL_H_ */
