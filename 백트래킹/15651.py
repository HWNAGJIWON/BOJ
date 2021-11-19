import sys
input = sys.stdin.readline

n, m = [int (x) for x in input().split()]


s = []

def backtracking():
    if len(s) == m:
        print(' '.join(map(str, s)))
    for i in range(1, n+1):
        s.append(i)
        s.pop()


backtracking()