#include <iostream>
#include <vector>

using namespace std;

int main() {

    /* first; create 1d vectors, and adding elements using push_back*/

    // declaring two empty vectors
    vector<int> vector1 {};
    vector<int> vector2 {};

    // adding elements to vector1 with push_back
    vector1.push_back(10);
    vector1.push_back(20);

    // adding elements to vector2 with push_back
    vector2.push_back(100);
    vector2.push_back(200);

    // cout << vector1.at(0) << endl;
    // cout << vector1.at(1) << endl;
    // cout << vector1.size() << endl;

    // cout << vector2.at(0) << endl;
    // cout << vector2.at(1) << endl;
    // cout << vector2.size() << endl;


    /* second; create 2d vectors, and adding vectors using push_back*/

    vector <vector<int>> vector_2d {};

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << endl;
    cout << vector_2d.at(1).at(1) << endl;
    cout << vector1.at(0) << endl;

    return 0;
}