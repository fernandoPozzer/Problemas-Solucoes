from sys import stdin

def jos(n:int, k=2):
    res = 0
    for i in range(1, n+1):
        res = (res+k) % i
    return res + 1

s = [list(map(int, l.strip().split(' '))) for l in stdin][1:]

p = 0

[print(f'Case {(p := p+1)}: {jos(n,m)}') for n,m in s]
