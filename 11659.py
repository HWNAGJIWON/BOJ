import sys

n, m = [int (x) for x in sys.stdin.readline().split()]
arr = [int(i) for i in sys.stdin.readline().split()]

answer_arr = [0]
sum = 0
for a in range(n):
    sum += arr[a]
    answer_arr.append(sum)

# print(answer_arr)
for x in range(m):
    s, e = [int (x) for x in sys.stdin.readline().split()]
    print(answer_arr[e]-answer_arr[s-1])
