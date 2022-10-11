#A. Bit++
num = int(input())
value = 0

for i in range(num):
    statement = input().split('X')
    if '++' in statement:
        value +=1

    else:
        value -=1


print(value)
    

