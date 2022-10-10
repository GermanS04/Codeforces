#A. Twins
coins = input()
coin_value = input()
suma = 0
total = 0
count = 0

list_value = [int(i) for i in coin_value.split()]
list_value.sort(reverse=True)
total = sum(list_value)


for x in list_value:
    suma = x + suma
    count = count + 1
    if suma > total/2:
        break

print(count)


