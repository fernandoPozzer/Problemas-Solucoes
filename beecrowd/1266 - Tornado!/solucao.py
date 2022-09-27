while (n := int(input())):

    p = input().replace(' ', '')

    c = n
    while p[0] == '0' and c > 0:
        p = f'{p[1:]}0'
        c -= 1
    
    print(p.count('00')+(c==0 and n%2))
