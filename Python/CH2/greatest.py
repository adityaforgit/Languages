num1 = int(input("Enter first number: "))
num2 = int(input("Enter first number: "))
num3 = int(input("Enter first number: "))
if num1>num2 and num1>num3:
    print(num1,"is greatest")
elif num1<num2 and num2>num3:
    print(num2,"is greatest")
else:
    print(num3,"is greatest")