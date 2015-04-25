#include "Sightseeing.h"
#include "Turista.h"
#include "Pol.h"
#include "Pessoa.h"
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

void printMenu() {

	cout << endl << "---- Porto SightSeeing ---- " << endl;
	cout << endl;
	cout << "  1. Add new tourist " << endl;
	cout << "  2. Add new pol " << endl;
	cout << "  3. Tourists " << endl;
	cout << "  4. Pols " << endl;
	cout << "  5. Groups of Tourists " << endl;
	cout << "  6. Show Route " << endl;

	cout << endl << "    Option (0 to exit) -> ";

}

Turista* addNewTouristInterface() {

	string name, id;

	cout << endl << "----- Adding new tourist -----" << endl;

	cout << endl << "  Name: ";
	cin >> name;

	cout << "  Idade: ";
	cin >> id;

	int idade = atoi(id.c_str());

	fstream turistasFile;

	turistasFile.open("turistas.txt", ios::app);

	if (turistasFile.is_open())

		turistasFile << endl << name << "," << idade << ",";

	else
		// error
		cout << "Error Loading: turistas.txt" << endl;

	Turista *t = new Turista(name, idade);

	return t;
}

Pol* addNewPolInterface() {

	int xCoord, yCoord;
	string nome, x, y;

	cout << endl << "----- Adding new pol -----" << endl;

	cout << "  Name: ";
	cin >> nome;

	cout << "  X-coordinate: ";
	cin >> x;

	cout << "  Y-coordinate: ";
	cin >> y;

	xCoord = atoi(x.c_str());
	yCoord = atoi(y.c_str());

	fstream polsFile;

	polsFile.open("pols.txt", ios::app);

	if (polsFile.is_open())

		polsFile << endl << xCoord << endl << yCoord << endl << nome << endl;

	else
		// error
		cout << "Error Loading: pols.txt" << endl;

	Pol* p = new Pol(xCoord, yCoord, nome);

	return p;

}

void printTuristas(vector<Turista *> t) {

	string option;

	cout << endl << "----- Tourists -----" << endl;
	cout << endl;

	for (int i = 0; i < t.size(); i++) {
		cout << "Name: " << t.at(i)->getNome() << endl;
		cout << "Age: " << t.at(i)->getIdade() << endl;

		vector<Pol *> p = t.at(i)->getPols();

		for (int j = 0; j < p.size(); j++) {
			cout << p.at(j)->getNome() << ", X = " << p.at(j)->getX()
					<< " , Y =" << p.at(j)->getY() << endl;
		}
		cout << endl;
	}

	do {

		cout << "	ESC (PRESS 0): ";
		cin >> option;

	} while (option != "0");

}

void printPols(vector<Pol*> p) {

	string option;

	cout << endl << "----- Pols -----" << endl;
	cout << endl;

	for (int i = 0; i < p.size(); i++) {
		cout << p.at(i)->getNome() << ", X = " << p.at(i)->getX() << ", Y = "
				<< p.at(i)->getY() << endl;
	}

	cout << endl;

	do {

		cout << "	ESC (PRESS 0): ";
		cin >> option;

	} while (option != "0");

}

int main() {

	string option;

	Sightseeing s = Sightseeing();

	do {

		printMenu();

		cin >> option;

		if (option == "1")
			s.addTurista(addNewTouristInterface());
		else if (option == "2")
			s.addPol(addNewPolInterface());
		else if (option == "3")
			printTuristas(s.getTuristas());
		else if (option == "4")
			printPols(s.getPols());
		else if (option == "5") {

		} else if (option == "0")
			cout << endl << "	Finishing!" << endl;
		else
			cout << endl << "	Invalid Option! Try again!" << endl;

	} while (option != "0");

	return 0;

}

