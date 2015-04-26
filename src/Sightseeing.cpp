/*
 * Sightseeing.cpp
 *
 *  Created on: Apr 26, 2015
 *      Author: luiscarvalho
 */

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

			Point p = Point(xCoord, yCoord);

			PoI poI = PoI(nome, p);

			interestPoints.push_back(poI);

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

			int age = atoi(toRead[1].c_str());

			Tourist t = Tourist(toRead[0], age);
			tourists.push_back(t);

			for (int i = 0; i < interestPoints.size(); i++)
				for (int j = 2; j < toRead.size(); j++)
					if (tourists.at(i).getNome() == toRead[j])
						t.addPoI(interestPoints.at(i));

		}

	} else {
		// error loading the file
		cout << "Error Loading: turistas.txt \n";
	}
}


