def fun(x):
    return 2 * x *(x - 1)
a = float(input())
b = float(input())
c = float(input())
n = 0
while abs((a - b) >= c):
    a = (a + b) / 2
    v1 = x - c
    v2 = x + c
    if (v1 <= v2):
        b = x
    else:
        x = a
        n = n + 1
print(a)

