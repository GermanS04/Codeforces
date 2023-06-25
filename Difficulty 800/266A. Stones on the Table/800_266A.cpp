// A. Stones on the Table
// https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h> 

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    // Number of stones and define counter
    int stones,counter = 0;

    // String of the colors of the stones
    string colors;

    cin >> stones >> colors;

    for(int i = 0; i < stones; i++){
        if(colors[i] == colors[i+1]){   //if the color of the stone is the same as the next one then increase counter
            counter++;
        }
    }

    cout<<counter<<"\n";

    return 0;
}