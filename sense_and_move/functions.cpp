#include <iostream>
#include <string>
#include <vector>
#include "functions.h"

using std::cout;
using std::endl;
using std::vector;    
using std::string;

vector<double> sense(vector<double> p, vector<string> world, string z, double pHit, double pMiss) 
{
    int p_size = p.size();
    vector<double> q(p_size, 0.0);

    for (int i = 0; i < p_size; i++) {
        bool hit = (z == world[i]);
        q[i] = p[i] * (hit * pHit + (1-hit) * pMiss);
    }

    double sum_of_elems = 0.0;
    for (auto n : q) {
        sum_of_elems += n;
    }
    
    for (int i = 0; i <  p_size; i++) {
        q[i] /= sum_of_elems;
    }

    return q;
}

vector<double> move(vector<double> p, int U, double pExact, double pOvershoot, double pUndershoot) {

    int p_size = p.size();
    vector<double> q(p_size, 0.0);
    double s;

    for (int i = 0; i < p_size ; i++ ) {
        s = pExact * p[ (((i - U) % p_size) + p_size) % p_size ];
        s = s + pOvershoot * p[ ((i - U - 1) % p_size + p_size) % p_size ];
        s = s + pUndershoot * p[ ((i - U + 1) % p_size + p_size) % p_size ];
        q[i] = s;
    }

    return q;
}

void print_probs(vector<double> p) {
    for (int i = 0; i < p.size(); i++) {
        if (i == 0) {
            cout << "[" << p[i] << ", ";
        } else if (i == p.size() - 1) {
            cout << p[i] << "]" << endl;
        } else {
            cout << p[i] << ", ";
        }
    }
}