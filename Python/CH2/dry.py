def add(x, y):
    """Adds two numbers"""
    return x + y
def subtract(x, y):
    """Subtracts two numbers"""
    return x - y
def multiply(x, y):
    """Multiplies two numbers"""
    return x * y

def divide(x, y):
    """Divides two numbers"""
    if y == 0:
        return "Error! Division by zero."
    return x / y

def calculator():
    """Main function to run the calculator app"""
    print("Welcome to the Simple Calculator!")
    print("Select operation:")
    print("1. Add (+)")
    print("2. Subtract (-)")
    print("3. Multiply (*)")
    print("4. Divide (/)")

    while True:
        # Ask the user to continue or exit
        next_calculation = input("\nDo you want to perform a calculation? (yes/no): ")
        if next_calculation.lower() != 'yes':
            print("Thank you for using the calculator. Goodbye!")
            break

        # Get user input for the operation
        choice = input("Enter choice(+, -, *, /): ")

        # Check if the choice is one of the four options
        if choice in ('+', '-', '*', '/'):
            try:
                num1 = float(input("Enter first number: "))
                num2 = float(input("Enter second number: "))
            except ValueError:
                print("Invalid input. Please enter a number.")
                continue # Skip the rest of the loop and start over

            if choice == '+':
                print(f"{num1} + {num2} = {add(num1, num2)}")

            elif choice == '-':
                print(f"{num1} - {num2} = {subtract(num1, num2)}")

            elif choice == '*':
                print(f"{num1} * {num2} = {multiply(num1, num2)}")

            elif choice == '/':
                result = divide(num1, num2)
                print(f"{num1} / {num2} = {result}")
        
        else:
            print("Invalid operator. Please use +, -, *, or /")
if __name__ == "__main__":
    calculator()