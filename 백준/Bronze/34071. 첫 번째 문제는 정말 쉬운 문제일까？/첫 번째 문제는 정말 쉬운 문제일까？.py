n = int(input())
lit = []

for i in range( 0,n ):
    lit.insert(i,int(input()))

ans = lit[0]
lit.sort()
if lit[0] == ans:
    print("ez")
elif lit[n-1] == ans:
    print("hard")
else:
    print("?")
