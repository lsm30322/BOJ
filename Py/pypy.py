def facto_last_digit(n):
    result = 1
    for i in range(1, n+1):
        result = ( result * i ) % 10
        if result == 0:
            for j in range( i + 1, n + 1):
                if j % 10 != 0:
                    result = j % 10
                    break
                for k in range( j + 1, n + 1):
                    result = ( result * ( k % 10 ) ) % 10
                break
    return result
            
n = 9999
result = facto_last_digit(n)
print(result)