# PRIME NUMBER CHECK
print("Enter the number to be checked : ")
n = int(input())
x = [0] * (n)

if n < 1:
    print("It's not possible for negative numbers")
else:
    if n == 0:
        print("Not a prime number")
    else:
        if n == 1:
            print("Not a prime number")
        else:
            if n == 2:
                print("It is a prime number")
            else:
                a = 2
                a1 = 0
                for i in range(n - 1, 2 - 1, -1):
                    if n % i == 0:
                        a1 = a1 + 1
                if a1 > 0:
                    print(str(n) + " is not a prime number ")
                    print("Number of divisors for " + str(n) + " is " + str(a + a1))
                else:
                    print(str(n) + " is a prime number ")
                    print("Number of divisors for " + str(n) + " is " + str(a + a1))
