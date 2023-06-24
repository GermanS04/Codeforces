// A. Stones on the Table
// https://codeforces.com/problemset/problem/266/A

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
#include <cstdio>
#include <cstring>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int stones,counter = 0;
    string colors;
    priority_queue<int,vector<int>,greater<int>> takes;

    cin >> stones >> colors;

    for(int i = 0; i < stones; i++){
        if(colors[i] == colors[i+1]){
            counter++;
        } else {
            takes.push(counter);
            counter = 0;
        }
    }

    cout<<takes.top()<<"\n";

    return 0;
}