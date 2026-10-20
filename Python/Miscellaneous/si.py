princpamt = int(input("Enter principal amount: "))
ri = float(input("Enter rate of interest: "))
time = int(input("Enter time in years: "))
interest = (princpamt * ri * time) / 100
print("Simple Interest is:", interest)
total_amount = princpamt + interest
print("Total amount after interest is:", total_amount)