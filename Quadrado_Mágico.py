import sys

def main():
    n = int(input())
    mat = [[0] * n for _ in range(n)]
    flag = True
    num = 0
    s = set()
    
    for i in range(n):
        row = list(map(int, sys.stdin.readline().split()))
        for j in range(n):
            mat[i][j] = row[j]
        
        row_sum = sum(row)
        s.update(row)
        
        if i == 0:
            num = row_sum
        if row_sum != num:
            flag = False
    
    if len(s) != n * n:
        flag = False
    
    sum_diag = 0
    for i in range(n):
        sum_diag += mat[i][i]
    
    if sum_diag != num:
        flag = False
    
    sum_other_diag = 0
    for i in range(n):
        sum_other_diag += mat[i][n - i - 1]
    
    if sum_other_diag != num:
        flag = False
    
    for i in range(n):
        col_sum = sum(mat[j][i] for j in range(n))
        if col_sum != num:
            flag = False
    
    if flag:
        print(num)
    else:
        print(0)

if __name__ == '__main__':
    main()
