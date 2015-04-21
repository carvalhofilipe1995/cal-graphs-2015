/*
 * Sightseeing.cpp
 *
 *  Created on: Apr 21, 2015
 *      Author: luiscarvalho
 */

#include "Sightseeing.h"
#include <fstream>
#include <sstream>

using namespace std;

Sightseeing::Sightseeing() {

	fstream pol;
	fstream turistas;

	pols.open("pols.txt");
	turistas.open("turistas.txt");

	if (pol.is_open()) {

		while (!pol.eof()) {

			string x;
			getline(pols, x);
			int xCoord = stoi(x);

			string y;
			getline(pols, y);
			int yCoord = stoi(y);

			string nome;
			getline(pols, nome);

			Pol p = Pol(xCoord, yCoord, nome);

			pols.push_back(p);

		}

	} else {
		// error loading the file
		cout << "Error Loading: pols.txt \n";
	}

	if (turistas.is_open()) {

		while (!turistas.eof()) {

			string line;
			getline(turistas, line);
			istringstream ss(line);
			vector<string> toRead;

			while (ss) {
				string s;

				if (!getline(ss, s, ','))
					break;

				toRead.push_back(s);

			}

			Turista t = Turista(toRead[0], stoi(toRead[1]));

			for (int i = 0, j = 2; i < pols.size() && j < toRead.size();
					i++, j++)
				if (pols.at(i).getNome() == toRead[j])
					t.addPol(pols.at(i));

		}

	} else {
		// error loading the file
		cout << "Error Loading: turistas.txt \n";
	}

}
