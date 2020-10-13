vowels = ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U')


def rep_vowel(letter1):
    for i in letter1:
        if i in vowels:
            letter1 = letter1.replace(i, '$')
    print(letter1, end='')


def rep_const(letter2):
    for i in letter2:
        if i not in vowels:
            letter2 = letter2.replace(i, '#')
    print(letter2, end='')


letter1 = input()
letter2 = input()
letter3 = input()

rep_vowel(letter1)
rep_const(letter2)
print(letter3.upper())
