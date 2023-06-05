#A. Expression
# https://codeforces.com/problemset/problem/479/A 
a = int(input())
b = int(input())
c = int(input())
results = list()
s = a + b + c
results.append(s)
m = a*b*c
results.append(m)
n = a + b * c
results.append(n)
v = (a+b) *c
results.append(v)
x = a*b+c
results.append(x)
y = a*(b+c)
results.append(y)

results.sort(reverse=True)
print(results[0])
