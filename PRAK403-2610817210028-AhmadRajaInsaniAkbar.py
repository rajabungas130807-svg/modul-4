a1, a2 = map(int, input().split())
i = a1
j = a2
if a1 < a2:
    arah = 1
else:
    arah = -1
while True:
    print(i, j, end='')
    if i == a2:
        break
    print(' - ', end='')
    i += arah
    j -= arah
