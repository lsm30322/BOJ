for i in range(2992, 10000):
    N = i
    sum1 = 0
    sum2 = 0
    sum3 = 0

    temp = N
    while temp > 0:
        a = temp % 10
        temp //= 10
        sum1 += a

    temp = N
    while temp > 0:
        b = temp % 12
        temp //= 12
        sum2 += b

    temp = N
    while temp > 0:
        c = temp % 16
        temp //= 16
        sum3 += c

    if sum1 == sum2 and sum2 == sum3:
        print(i)
