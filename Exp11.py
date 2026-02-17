name = input("enter your Name:") 
print("hello", name)         

# Functions for operations
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    return a / b


# Menu
print("Simple Calculator")
print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

# User input
choice = int(input("Enter your choice (1-4): "))

num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Operations
if choice == 1:
    print("Result:", add(num1, num2))

elif choice == 2:
    print("Result:", subtract(num1, num2))

elif choice == 3:
    print("Result:", multiply(num1, num2))

elif choice == 4:
    if num2 != 0:
        print("Result:", divide(num1, num2)) # Fixed: Added indentation
    else: 
        print("Error: Division by zero")     # Fixed: Added indentation
else:
    print("Invalid choice")
