# A. Even Odds
# https://codeforces.com/problemset/problem/318/A
n, position = map(int, input().split())

if(position<=(n+1)//2):
    print(position*2-1)
    
else:
    position-=(n+1)//2
    print(position*2)

