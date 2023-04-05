def fibo(n):
    a = 0
    b = 1
    if n >= 2:
        print(str(a) + ", " + str(b), end='', flush=True)
        for i in range(2, n - 1 + 1, 1):
            c = a + b
            a = b
            b = c
            print(", " + str(c), end='', flush=True)
    else:
        print("since number of digits lesser than 2")
        if n < 0:
            print("invalid input")
        else:
            if n == 0:
                print("fibbonacci series is 0.")
            else:
                print("Fibonacci series is 0,1")

# Main
print("enter number of digits upto which fibbonacci series needs to found.")
n = int(input())
fibo(n)
