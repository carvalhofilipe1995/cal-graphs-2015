#include "Sightseeing.h"

using namespace std;

Sightseeing::Sightseeing() {

	fstream polFile;
	fstream turistasFile;

	polFile.open("pols.txt");
	turistasFile.open("turistas.txt");

	if (polFile.is_open()) {

		while (!polFile.eof()) {

			string x;
			getline(polFile, x);
			int xCoord = atoi(x.c_str());

			string y;
			getline(polFile, y);
			int yCoord = atoi(y.c_str());

			string nome;
			getline(polFile, nome);

			Pol *p = new Pol(xCoord, yCoord, nome);

			pols.push_back(p);

		}

	} else {
		// error loading the file
		cout << "Error Loading: pols.txt \n";
	}

	if (turistasFile.is_open()) {

		while (!turistasFile.eof()) {

			string line;
			getline(turistasFile, line);
			istringstream ss(line);
			vector<string> toRead;


			while (ss) {
				string s;

				if (!getline(ss, s, ','))
					break;

				toRead.push_back(s);

			}

			Turista *t = new Turista(toRead[0], atoi(toRead[1].c_str()));
			turistas.push_back(t);

			for (int i = 0; i < pols.size(); i++)
				for (int j = 2; j < toRead.size(); j++)
					if (pols.at(i)->getNome() == toRead[j])
						t->addPol(pols.at(i));

		}

	} else {
		// error loading the file
		cout << "Error Loading: turistas.txt \n";
	}
}

