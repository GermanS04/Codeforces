// A. Word Capitalization
// https://codeforces.com/problemset/problem/281/A 

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
    int ascii;

    cin>>word;

    //ASCII number of first letter
    ascii = int(word[0]);

    //if ascii is in range of capital letter
    if(ascii < 91){
        cout<<word<<"\n"; //do nothing

    } else { //if ascii in range of lowercase letter
        word[0] = char(ascii-32); //-32 of a lowercase letter ascii gives the uppercase
        cout<<word<<"\n";
    }


    return 0;
}