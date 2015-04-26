#include <iostream>
#include <vector>
#include <string>
#include "Tourist.h"
#include "PoI.h"
#include "Autocarro.h"

using namespace std;

void AlgoritmoTuristas(vector<Tourist> t1) {

	int min_dist = 1000;

	vector<vector<int> > t1_dist(t1.size(), vector<int>(t1.size(), -1));

	for (unsigned int i = 0; i < t1.size(); i++) {
		vector<PoI> pi = t1.at(i).getPoIs();

		for (unsigned int j = (i + 1); /*j < t1.size()*/; j++) {
			vector<PoI> pj = t1.at(j).getPoIs();
			int total_min_dist = 0;
			int min_dist = 10000000;
			int l_fin = 0;

			for (unsigned int k = 0; k < pi.size(); k++) {
				for (unsigned int l = 0; l < pj.size(); l++) {
					if (pi[k].distMinima(pj[l]) < min_dist) {
						min_dist = pi[k].distMinima(pj[l]);
						l_fin = l;
					}
				}

				total_min_dist += min_dist;
				pi.erase(pi.begin() + k);
				pj.erase(pj.begin() + l_fin);
			}
		}
	}

	Autocarro a1(5);
	Autocarro a2(5);
	Autocarro a3(5);
	Autocarro a4(5);

	vector<Autocarro> a_total;
	a_total.push_back(a1);
	a_total.push_back(a2);
	a_total.push_back(a3);
	a_total.push_back(a4);

	vector<Tourist> t1_copy = t1;
	vector<bool> visited;

	for (unsigned int p = 0; p < t1_copy.size(); p++) {
		visited.push_back(false);
	}

	for (unsigned int m = 0; m < a_total.size(); m++) {
		int cap_cont = a_total[m].getCapacidade();

		for (unsigned int q = 0; q < visited.size(); q++) {
			if (visited[q] == false) {
				visited[q] = true;
				a_total[m].addTurista(t1_copy[q]);

				while (cap_cont != 0) {
					int index_d = 0;

					for (unsigned int n = 0; n < t1_copy.size(); n++) {
						for (unsigned int o = 0; o < t1_copy.size(); o++) {
							if (t1_dist[0][o] >= 0) {
								if (t1_dist[0][o] < min_dist
										&& visited[o] == false) {
									min_dist = t1_dist[0][o];
									index_d = o;
								}

							}
						}

						if (t1_dist[n][0] >= 0) {
							if (t1_dist[n][0] < min_dist
									&& visited[n] == false) {
								min_dist = t1_dist[n][0];
								index_d = n;
							}
						}
					}

					visited[index_d] = true;
					a_total[m].addTurista(t1_copy[index_d]);
				}

			}
		}
	}

}
