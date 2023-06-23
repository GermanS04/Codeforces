// A. Lights Out
// https://codeforces.com/problemset/problem/275/A

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

void changes(vector< vector<int> > &matrix, int row, int col, int times){
    for(int i = 0; i < times; i++){
        matrix[row][col] = abs(matrix[row][col]) - 1;
        if(col == 0){
            matrix[row][col+1] = abs(matrix[row][col+1]) - 1;
        }
        if(col == 1){
            matrix[row][col+1] = abs(matrix[row][col+1]) - 1;
            matrix[row][col-1] = abs(matrix[row][col-1]) - 1;
        }
        if(col == 2){
            matrix[row][col-1] = abs(matrix[row][col-1])-1;
        }

        if(row == 0){
            matrix[row+1][col] = abs(matrix[row+1][col])-1;
        }
        if(row == 1){
            matrix[row+1][col] = abs(matrix[row+1][col]) - 1;
            matrix[row-1][col] = abs(matrix[row-1][col]) - 1;
        }
        if(row == 2){
            matrix[row-1][col] = abs(matrix[row-1][col])-1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int times, row = 0, column = 0;
    vector<int> row1 {1,1,1}, row2 {1,1,1}, row3 {1,1,1};
    vector< vector<int> > answer { row1, row2, row3};


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>times;
            changes(answer, i, j, times);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == 2){
                cout<<abs(answer[i][j])<<"\n";
            } else {
                cout<<abs(answer[i][j]);
            }
        }
    }

    

    return 0;
}