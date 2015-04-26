#ifndef POI_H_
#define POI_H_

#include <string>

using namespace std;

class PoI {
	int x;
	int y;
	string nome;
public:

	PoI(int x, int y, string nome) : x(x), y(y), nome(nome){};
	int getX() {return x;};
	int getY() {return y;};
	string getNome() {return nome;};

	bool operator==(PoI& p){
		if(x == p.getX() && y == p.getY())
			return true;
		return false;
	};

};



#endif /* POI_H_ */
