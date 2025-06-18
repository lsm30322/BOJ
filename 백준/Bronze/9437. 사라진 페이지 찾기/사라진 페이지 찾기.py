while True:
    line = input().strip()
    if line == '0':
        break
    N, P = map(int, line.split())

    # 총 장 수
    total_sheets = N // 4

    for i in range(1, total_sheets + 1):
        pages = [2*i - 1, 2*i, N - 2*i + 1, N - 2*i + 2]
        if P in pages:
            # P를 제외한 나머지 출력
            pages.remove(P)
            pages.sort()
            print(*pages)
            break
