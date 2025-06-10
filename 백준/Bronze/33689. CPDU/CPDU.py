n = int( input() )

ans = ""
cnt = 0
for i in range(n):
    cmp = input()
    if( cmp[0] == "C"):
        cnt += 1

print(cnt)