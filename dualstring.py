n=int(input())
for i in range(0,n):
    li=list(input())
    li1=list(set(li))
    if len(li)==len(li1):
        print("No")
    else:
        print("Yes")
