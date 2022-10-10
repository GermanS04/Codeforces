#A. String task
text0 = input()
text = text0.lower()
vowel = ["A", "O", "Y", "E", "U", "I"]
vowels = vowel + [i.lower() for i in vowel]

letters = list()

for letter in text:
    letters.append(letter)

for index in range(len(letters)):
    if letters[index] not in vowels:
        letters[index] = '.' + letters[index]
    elif letters[index] in vowels:
        letters[index] = ''

letters = ''.join(letters)

print(letters)
