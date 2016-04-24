input()
inlist1 = list(int(i) for i in input().split())
input()
inlist2 = list(int(i) for i in input().split())
input()
count = 0
for i in input().split():
    if (int(i) in inlist1) and (int(i) in inlist2):
        count += 1
print(count)