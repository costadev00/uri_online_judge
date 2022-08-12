x= int(input())
y = int(input())
aux=0
if(y<x):
    aux=x
    x=y
    y=aux

x+=1
ans=0
while x<y:
    if(x%2!=0):
        ans+=x
    x+=1
print(ans)