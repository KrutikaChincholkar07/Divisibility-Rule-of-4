num = int(input("Enter a number: "))

last_two = num % 100

if last_two % 4 == 0:
    print(num, "is divisible by 4")
else:
    print(num, "is not divisible by 4")
