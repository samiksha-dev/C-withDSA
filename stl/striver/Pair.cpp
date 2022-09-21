#include <iostream>
using namespace std;
#include <utility> //header file for map
int main()
{
    pair<int, char> PAIR1;

    // first part of the pair
    PAIR1.first = 100;
    // second part of the pair
    PAIR1.second = 'G';

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;
    //----------------------------------------------------------------------------------------
    // Different ways to initialize pair:

    // pair g1;         // default
    // pair g2(1, 'a'); // initialized,  different data type
    // pair g3(1, 10);  // initialized,  same data type
    // pair g4(g3);     // copy of g3
    //                  // Another way to initialize a pair is by using the make_pair() function.
    // g2 = make_pair(1, 'a');
    // Another valid syntax to declare pair is :
    // g2 = {1, 'a'};

    pair<pair<int, int>, int> pr = {{1, 2}, 1};
    cout << pr.first.second << " " << pr.second << endl;
    // isse milega first pair ka dusra vyakti

    pair<pair<int, int>, pair<int, int>> pq = {{1, 2}, {3, 4}};
    cout << pq.first.second << " " << pq.second.second; // this is the u can access anything

    // vector<pair<int,int>> v;
    // set<pair<int,int>> s;
    // map<pair<int,int>,int> m//mtlb values is pair key is int
    // everything is possible

    // unordered map with pair is not possible
    return 0;
}