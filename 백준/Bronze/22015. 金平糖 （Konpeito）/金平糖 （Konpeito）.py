a,b,c = map( int, input().split() )
ans = 0
mx = max(a,b,c)

for _ in range(3):
    while( a != mx ):
        ans += 1
        a += 1
    while( b != mx ):
        ans += 1
        b += 1
    while( c != mx ):
        ans += 1
        c += 1

print(ans)