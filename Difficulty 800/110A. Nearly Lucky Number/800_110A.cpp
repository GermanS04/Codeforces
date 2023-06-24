// A. Nearly Lucky Number
// https://codeforces.com/problemset/problem/110/A

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

    string number;
    int luckydigits = 0;
    unordered_map <char,int> luckynums { {'4',0}, {'7',0} };

    cin>>number;

    for(auto x:number){
        if(x == '4' || x == '7'){
            luckydigits++;
        }
    }

    for(auto x:to_string(luckydigits)){
        luckynums[x]++;
    }

    if(luckynums.size() > 2){
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }

    return 0;
}