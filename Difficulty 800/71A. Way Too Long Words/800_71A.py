# A. Way Too Long Words
# https://codeforces.com/problemset/problem/71/A
n = input()

for x in range(int(n)):
    x = input()

    if x.isnumeric():
        continue

    elif len(x) <= 10:
        print(x)

    elif len(x) >= 11 and len(x) <= 100:
        x = x[0] + str(len(x) - 2) + list.pop(list(x))
        print(x)
    