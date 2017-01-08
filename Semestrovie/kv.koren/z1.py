a = float(input())
b = a
while (b * b != a):
    b = 0.5 * (b + (a / b))

    print(b)

