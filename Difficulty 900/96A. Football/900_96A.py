# A. Football
# https://codeforces.com/problemset/problem/96/A
from traceback import print_tb


players = input()
list = []
count0 = 0
count1 = 0

for i in players[0:]:
    i = int(i)
    list.append(i)

for i in list:
    if i == 0:
        count1 = 0
        count0 = count0 + 1
    
    elif i == 1:
        count1 = count1 + 1
        count0 = 0
    
    if count0 >= 7 or count1 >= 7:
        break

if count1 >= 7 or count0 >= 7:
    print('YES')

else:
    print('NO')
