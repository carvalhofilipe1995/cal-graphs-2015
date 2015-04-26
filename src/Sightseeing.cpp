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

			Pol p = Pol(xCoord, yCoord, nome);

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

			Turista t = Turista(toRead[0], atoi(toRead[1].c_str()));
			turistas.push_back(t);

			for (int i = 0; i < pols.size(); i++)
				for (int j = 2; j < toRead.size(); j++)
					if (pols.at(i).getNome() == toRead[j])
						t.addPol(pols.at(i));

		}

	} else {
		// error loading the file
		cout << "Error Loading: turistas.txt \n";
	}
}


bool Sightseeing::startGraph(){

	for(int i = 0; i < pols.size(); i++)
		graph.addVertex(pols.at(i));

	vector<Vertex<Pol> *> v = graph.getVertexSet();

	for(int i = 0; i < graph.getVertexSet().size(); i++){
		for(int j = i + 1; j < v.size(); j++){
			graph.addEdge(v.at(i)->getInfo(),v.at(j)->getInfo(),0.0,0.0);
		}
	}

}

