#A. Theatre Square
# https://codeforces.com/problemset/problem/1/A 
import math
n,m,a = map(int, input().split())

width = math.ceil(n/a)
length = math.ceil(m/a)

need = width * length

print(need)

