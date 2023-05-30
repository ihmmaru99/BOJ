from collections import deque
import sys

T = int(input())
for i in range(T):
    N, M = map(int, input().split())
    q = deque(list(map(int, sys.stdin.readline().split())))
    count = 0
    while q:
        best = max(q)
        front = q.popleft()
        M -= 1
        if best == front:
            count += 1
            if M < 0:
                print(count)
                break
        else:
            q.append(front)
            if M < 0:
                M = len(q) - 1
