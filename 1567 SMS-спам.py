s = input()
cost = 0
for i in range(0, len(s)):
    if s[i] in 'adgjmpsvy. ':
        cost += 1
    elif s[i] in 'behknqtwz,':
        cost += 2
    else:
        cost += 3
print(cost)