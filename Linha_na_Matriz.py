#read a number n that indicates the line of a matrix that should have the operation performed
n = int(input())
#read the operation that should be performed
t = input()
#read the matrix
m = [[]]
for i in range(12):
    m.append([])
    for j in range(12):
        m[i].append(float(input()))

#perform the operation
#if t equals S, sum the elements of the line n
#else prints the average of the elements of the line n
s = 0
for i in range(12):
    s += m[n][i]
if t == 'S':
    print("{:.1f}".format(s))
else:
    print("{:.1f}".format(s/12))
