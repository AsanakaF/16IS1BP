import math

x = int(input())
a = int(input())
case = int(input())

if case == 1:
    if (25 * a ** 2 + 30 * a * x + 9 * x ** 2) != 0:
        G = 9 * (7 * a ** 2 - 19 * a * x + 10 * x ** 2) / 25 * a ** 2 + 30 * a * x + 9 * x ** 2
        print(G)
    else:
        print("error")

elif case == 2:
    F = math.cos(9 * a ** 2 - 13 * a * x - 10 * x ** 2)
    print(F)

elif case == 3:
    Y = math.log(- 80 * a ** 2 - 46 * a * x + 21 * x ** 2 + 1) / math.log(10)
    print(Y)

else:
    print ("error 2")
