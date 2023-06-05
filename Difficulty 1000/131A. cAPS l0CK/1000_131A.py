#A. cAPS lOCK
# https://codeforces.com/problemset/problem/131/A 
word = input()
if word[0].islower() and word[1:].isupper():
    rest = word[1:].lower()
    first = word[0].upper()
    print(first + rest)

elif word[0].islower() and len(word) == 1:
    word = word.upper()
    print(word)

elif word.isupper():
    word = word.lower()
    print(word)

else:
    print(word)