import sys 

def solve():
    while True:
        a,b,c = map( int, input().split() )
        if a == 0 and b == 0 and c == 0:
            return
        v = [a,b,c]
        chk = True
        diff = v[1] - v[0]

        for i in range(1, len(v)):
            if v[i] - v[i-1] != diff:
                chk = False
                diff = v[1] / v[0]
                break
        if chk == True:
            print("AP", v[2]+diff )
        else:
            print("GP", int(v[2]*diff) )


solve()