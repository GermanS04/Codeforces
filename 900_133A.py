#A. HQ9+

word = input()

strH = word.find('H',0)
strQ = word.find('Q',0)
str9 = word.find('9',0)

if strH >= 0 or strQ >= 0 or str9 >= 0:
    print('YES')

else:
    print('NO')

