// PizzaForces
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
  
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int testcases;
    cin >> testcases;

    int Psmall = 6;
    int Pmedium = 8;
    int Plarge = 10;

    int Tsmall = 15;
    int Tmedium = 20;
    int Tlarge = 25;

    int friends;
    int moduleS; 
    int moduleM;
    int moduleL;
    int minimum;
    int pizzas;

    vector <int> m;

    for (int i = 0; i < testcases; i++){
        cin >> friends;
        moduleS = friends%Psmall;
        moduleM = friends%Pmedium;
        moduleL = friends%Plarge;

        m.push_back(moduleS);
        m.push_back(moduleM);
        m.push_back(moduleL);

        minimum = *min_element(m.begin(),m.end());

        if (minimum == moduleS){
            

        } else if (minimum == moduleM){

        } else {

        }



    }



    return 0;
}