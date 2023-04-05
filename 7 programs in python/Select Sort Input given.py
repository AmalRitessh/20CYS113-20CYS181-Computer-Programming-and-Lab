print("Enter the list of the array:")
n = int(input())
a = [0] * (n)

for i in range(0, n - 1 + 1, 1):
    print("Enter the elements of the array in index" + str(i + 1))
    a[i] = int(input())
for i in range(0, n - 1 + 1, 1):
    for j in range(0, n - 1 + 1, 1):
        b = a[i]
        c = a[j]
        if a[i] < a[j]:
            a[j] = b
            a[i] = c
for i in range(0, n - 1 + 1, 1):
    print(a[i])
