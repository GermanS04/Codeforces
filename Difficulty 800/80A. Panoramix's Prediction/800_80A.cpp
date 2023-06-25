// A. Panoramix's Prediction
// https://codeforces.com/problemset/problem/80/A
 
#include <bits/stdc++.h>
 
using namespace std;
 

int nextPrime(int &number, vector<int> factors){
    int squareR,valid = 0;
    vector<int> primesF;

    squareR = ceil(sqrt(number) + 1);

    // check for the prime factors that are below the square root of the number
    for(auto x:factors){
        if(squareR > x){
            primesF.push_back(x);
        } else {
            break;
        }
    }

    // check if number is even or odd, if even, add 1 to make it odd and next possible prime number, 
    // if odd, add 2 to make it odd and next possible prime number
    if(number % 2 == 0){
        number += 1;
    } else {
        number += 2;
    }


    while(true){

        for(auto x:primesF){
            if((number % x) != 0){ // if the number is not divisible by the prime factor
                valid++; // add 1 to the valid 
            } else {
                break;
            }
        }

        // valid must be equal to the size of the prime factors because 
        // if the number is not divisible by any of the prime factors, then it is a prime number
        if(valid == primesF.size()){
            return number;
        } else {
            number += 2; //add 2 because we made sure the number is odd, because any even number is not prime except for 2
            valid = 0;
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

    int first, next, real;

    //since square root of 50 (max number of the problem) is 7.07, then the prime factos must be below 8
    vector<int> primefactors {2,3,5,7};

    cin >> first >> next;

    real = nextPrime(first, primefactors);

    if(real == next){
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}