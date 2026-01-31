sentence = input("Enter a sentence: ")
sentence = sentence.lower()
a = e = i = o = u = 0
for ch in sentence:
    if ch == 'a':
        a += 1
    elif ch == 'e':
        e += 1
    elif ch == 'i':
        i += 1
    elif ch == 'o':
        o += 1
    elif ch == 'u':
        u += 1
print("Vowel counts:")
print("a:", a)
print("e:", e)
print("i:", i)
print("o:", o)
print("u:", u)
