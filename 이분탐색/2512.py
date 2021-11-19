import sys

local = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

total = int(sys.stdin.readline())

arr.sort()
s = 0
e = arr[local-1]
ok = True
answer = -1

ask_total = 0
for i in range(local):
    ask_total += arr[i]
mid = 0
while (s < e):
    mid = (s+e)//2
    sum = 0
    for i in range(local):
        if arr[i] > mid:
            sum += mid
        else:
            sum += arr[i]
    if total >= sum:
        answer = sum
        s += 1
    else:
        e -= 1

if ask_total <= total:
    mid = arr[local-1]

print(mid)