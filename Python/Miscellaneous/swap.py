'''usingthird variable'''
'''a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
temp = a
a = b
b = temp
print("After swapping:")
print("First number:", a)
print("Second number:", b)'''
'''Without using third variable'''
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
a = a+b
b = a-b
a = a-b                     
print("After swapping:")
print("First number:", a)
print("Second number:", b)