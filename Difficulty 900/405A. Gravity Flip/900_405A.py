# A. Gravity Flip
# https://codeforces.com/problemset/problem/405/A
num_col = int(input())
num_cubes = input()
list_cubes = num_cubes.split()
list_cubes = [int(i) for i in list_cubes]
list_cubes.sort()
list_cubes = [str(i) for i in list_cubes]
list_cubes = ' '.join(list_cubes)
print(list_cubes)