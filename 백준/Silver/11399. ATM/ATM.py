num = int(input())
list_a = list(map(int, input().split()))
list_a.sort()
total = 0
for i in range(num):
    for j in range(i+1):
        total += list_a[j]
print(total)