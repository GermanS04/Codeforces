#A. Chat Room
word = input().lower()
hello = list('hello')
know = list()
index = 0
for i in range(5):
    index = word.find(hello[i],index)
    know.append(index)
    index += 1

if -1 in know:
    print('NO')
else:
    print('YES')
