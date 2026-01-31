cost_price = float(input("Enter the cost price: "))
selling_price = float(input("Enter the selling price: "))
if selling_price > cost_price:
    profit = selling_price - cost_price
    print("The profit is:" ,profit)
elif selling_price < cost_price:
    loss = cost_price - selling_price
    print("The loss is:", loss)
else:
    print("There is no profit or loss.")
