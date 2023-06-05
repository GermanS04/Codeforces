# A. Team
# https://codeforces.com/problemset/problem/231/A
from itertools import count


n = int(input())
count_problems = 0

for i in range(n):
    friends = input()
    list_friends = friends.split()
    count_sure = list_friends.count('1')
    
    if count_sure > 1:
        count_problems = count_problems + 1
    
print(count_problems)
    