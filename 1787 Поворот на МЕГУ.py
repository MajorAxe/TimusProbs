[k, n] = input().split()
currQueue = 0
for i in input().split():
    currQueue += int(i) - int(k)
    currQueue = currQueue if currQueue > 0 else 0
print(currQueue)