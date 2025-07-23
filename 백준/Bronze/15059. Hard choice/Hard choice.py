a,b,c = map( int, input().split() )
d,e,f = map( int, input().split() )
tot = 0
if d - a > 0:
    tot += d-a
if e - b > 0:
    tot += e-b
if f - c > 0:
    tot += f-c
print(tot)
