#A. Dragons
strength, dragons = map(int, input().split())
lista = list()

for i in range(dragons):
    dragstren, bonus = map(int, input().split())
    lista.append((dragstren,bonus))

lista.sort()

for i in range(len(lista)):
    if lista[i][0] < strength:
        strength += lista[i][1]
    else:
        valid = 0
        break
    valid = 1

if valid == 1:
    print("YES")

else:
    print("NO")


    