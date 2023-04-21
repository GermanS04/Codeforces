#A. Lucky Division
import math
def luck(number):
    lucky = []
    for i in range(1,number+1):
        num = str(i)
        if '4' in num or '7' in num:
            if '0' not in num and \
                '1' not in num and \
                '2' not in num and \
                '3' not in num and \
                '5' not in num and \
                '6' not in num and \
                '8' not in num and \
                '9' not in num:
                lucky.append(num)
    return lucky

num = int(input())
lucky = list(map(int, luck(num)))
count = 0
for i in lucky:
    if num%i == 0:
        count += 1

if count > 0:
    print('YES')
else:
    print('NO')
