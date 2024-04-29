#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <vector>

using std::vector;    
using std::string;

vector<double> sense(vector<double> p, vector<string> world, string z, double pHit, double pMiss);
vector<double> move(vector<double> p, int U, double pExact, double pOvershoot, double pUndershoot);
void print_probs(vector<double> p);

#endif /* FUNCTIONS_H */