from sys import stdin, stdout

cut = lambda x: sum([a-x for a in ns if a > x])

while 1:
    try:
        n,a = map(int, stdin.readline().split())
        assert n != 0 and a != 0
    except:
        break

    ns = tuple(map(int, stdin.readline().split()))

    sums = sum(ns)
    max_n = max(ns)

    if sums == a:
        stdout.write(':D\n')
    
    elif sums < a:
        stdout.write('-.-\n')

    else:
        high = max_n
        low  = 0
        for _ in range(35):
            mid = (high+low) / 2
            cut_area = cut(mid)
            if cut_area > a:
                low = mid
            else:
                high = mid

        stdout.write(f'{mid:.4f}\n')
