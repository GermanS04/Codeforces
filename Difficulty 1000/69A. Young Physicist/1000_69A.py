#A. Young Physicist
# https://codeforces.com/problemset/problem/69/A 
lines = int(input())
allnum = list()
allX = list()
allY = list()
allZ = list()
result = list()

for i in range(lines):
    i = input().split()
    i = [int(x) for x in i]
    allnum.append(i)

for i in allnum:
    allX.append(i[0])
    allY.append(i[1])
    allZ.append(i[2])

allX = sum(allX)
allY = sum(allY)
allZ = sum(allZ)

if allX == 0 and allX == allY and allY == allZ:
    print('YES')

else:
    print('NO')


