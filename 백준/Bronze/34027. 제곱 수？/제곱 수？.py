import math
import sys
input = sys.stdin.readline

n = int(input())
results = []

for _ in range(n):
    a = int(input())
    b = int(math.isqrt(a))
    results.append("1" if b * b == a else "0")

sys.stdout.write("\n".join(results) + "\n")
