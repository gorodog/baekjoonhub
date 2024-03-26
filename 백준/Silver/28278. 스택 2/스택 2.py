import sys
n = int(input())
stack = []
for i in range(n):
    com = sys.stdin.readline().split()
    if com[0] == '1':
        stack.append(com[1])
    elif com[0] == '2':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())
    elif com[0] == '3':
        print(len(stack))
    elif com[0] == '4':
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif com[0] == '5':
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[len(stack)-1])