import string
uppercase = list(string.ascii_uppercase)
lowercase = list(string.ascii_lowercase)
letter = input()
number = int(input())
if letter in uppercase:
    key = uppercase.index(letter)
    print(uppercase[(key+number)%26])
elif letter in lowercase:
    key = lowercase.index(letter)
    print(lowercase[(key+number)%26])