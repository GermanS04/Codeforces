// A. Word
// https://codeforces.com/problemset/problem/59/A

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

    string word;
    int upper = 0, lower = 0, ascii, index = 0;
    vector <int> indexUP, indexLOW;
    indexUP.reserve(100);
    indexLOW.reserve(100);

    cin>>word;
    
    for(auto x:word){
        ascii = (int) x;
        if(ascii < 91){
            upper++;
            indexUP.push_back(index);
        } else {
            lower++;
            indexLOW.push_back(index);
        }
        index++;
    }

    if(lower > upper || upper == lower){
        for(auto x:indexUP){
            word[x] = char(int(word[x])+32);
        }
    } else {
        for(auto x:indexLOW){
            word[x] = char(int(word[x])-32);
        }
    }
    
    cout<<word<<"\n";

    return 0;
}