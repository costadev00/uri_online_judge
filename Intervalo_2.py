n = int(input())
x = 0
c=0
o=0
while x<n:
    a = int(input())
    if a>=10 and a<=20:
        c+=1
    else:
        o+=1
    x+=1
print("{} in".format(c))
print("{} out".format(o))