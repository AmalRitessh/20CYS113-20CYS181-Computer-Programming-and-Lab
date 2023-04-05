a = [0] * (4)

a[0] = 6
a[1] = 3
a[2] = 16
a[3] = 1
for i in range(0, 3 + 1, 1):
    for j in range(0, 2 + 1, 1):
        b = a[j + 1]
        c = a[j]
        if a[j + 1] < a[j]:
            a[j] = b
            a[j + 1] = c
    print(str(a[i]) + ",", end='', flush=True)
for i in range(0, 3 + 1, 1):
    print(a[i])
