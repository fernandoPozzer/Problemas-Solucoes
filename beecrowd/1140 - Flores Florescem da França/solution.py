

while True:
    phrase = input().lower()
    if phrase =='*':
        break
    arr = phrase.split()
    char= arr[0][0]
    for i in arr:
        if char!= i[0]:
            char = '*'
            break
    if char!='*':
        print('Y')
    else:
        print('N')