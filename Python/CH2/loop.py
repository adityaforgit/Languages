'''a = int(input("Enter value of a:"))
print()
for _ in range(a):
    print("Hello World")'''
'''for a in range(1,101): //101 is not included
    print(a)'''
'''for _ in range(1,101):
    if _%2 != 0:
        print(_)'''
n = int(input("Enter value of n:"))
current_term = 1
common_difference = 2
print("\nAP:",end=" ")
for _ in range(n-1):
    print(current_term,end=", ")
    current_term += common_difference
    print(current_term)
