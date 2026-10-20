num = int(input("Enter a number:"))
if (num %5 ==0 and num % 3 == 0):
    print("The number is divisible by both 5 and 3.")
elif (num % 5 == 0):
    print("The number is divisible by 5.")
elif (num % 3 == 0):
    print("The number is divisible by 3.")
else:
    print("The number is not divisible by either 5 or 3.")