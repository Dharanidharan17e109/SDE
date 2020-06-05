from collections import Counter
t,n=map(int,input().split(" "))
li=['']*n
for i in range(0,t):
    k=list(input())
    for i in range(0,n):
        li[i]+=k[i]
res=''
for i in li:
    r=Counter(sorted(list(i)))
    k2=r.most_common(1)
    res+=k2[0][0]
print(res)    
