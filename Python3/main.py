print("Welcome to Python calculator")
num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))
print("Select operation: ")
operation = ["Addition","Multiplication","Substraction","Division"]

for i in operation:
    print(i)
    
choice = int(input())

if choice == 1:
    print("The sum is",num1+num2)
elif choice == 2:
    print("The product is ",num1*num2)
elif choice == 3:
    print("The difference is ",num1-num2)
elif choice == 4:
    try:
        print("The quotient is ",num1/num2)
    except Exception as e:
        print(e)