// Lights Out

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
 
typedef vector< vector<int> > vvi;

int on_off(int number){
    if(number == 1){
        number = 0;
    } if(number == 0){
        number = 1;
    }
    return number;
}

vvi changeADJ(vvi matrix, vvi lights, int posX, int posY, int times){
    while(times--){
        lights[posX][posY] = on_off(matrix[posX][posY]);
        lights[posX-1][posY] = on_off(matrix[posX-1][posY]);
        lights[posX+1][posY] = on_off(matrix[posX+11][posY]);
        lights[posX][posY-1] = on_off(matrix[posX][posY-1]);
        lights[posX][posY+1] = on_off(matrix[posX][posY+1]);
    }

    return lights;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    vvi lights;

    vvi matrix;

    vector<int> rows, ones;
    int counter = 0,number;

    while(true){
        counter++;
        cin>>number;
        ones.push_back(1);
        if (counter%3 == 0){
            lights.push_back(ones);
            ones.clear();
        }
        if (counter==9){
            break;
        }
    }

    counter = 0;
    while(true){
        counter++;
        cin>>number;
        rows.push_back(number);
        if (counter%3 == 0){
            matrix.push_back(rows);
            rows.clear();
        }
        if (counter==9){
            break;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; i++){
            lights = changeADJ(matrix, lights, i, j, matrix[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; i++){
            cout<<lights[i][j]<<' ';
        }
        cout<<"\n";
    }

    return 0;
}