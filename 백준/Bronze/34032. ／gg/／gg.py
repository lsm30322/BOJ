a = int(input())
str = input()

b = 0
c = 0

for i in range(len(str)):
    if(str[i]=='O'):
        b += 1
    else:
        c += 1

if( b >= c ): 
    print("Yes")
else: 
    print("No")