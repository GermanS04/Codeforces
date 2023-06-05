# A. Next round
# https://codeforces.com/problemset/problem/158/A
nk = input().split()
n = int(nk[0])
k = int(nk[1])
scores = input().split()
scores = [int(i) for i in scores]
count = 0

for i in scores:
    if i >= scores[k - 1] and i > 0:
        count += 1
    
    else:
        break

print(count)