t=int(input())
for i in range(0,t):
    n=int(input())
    x,y=[],[]
    for i in range(0,n):
        a,b=map(int,input().split(" "))
        x.append(a)
        y.append(b)
    x.sort()
    y.sort()
    k1=x[n-1]-x[0]
    k2=y[n-1]-y[0]
    print(max(k1,k2)**2)
