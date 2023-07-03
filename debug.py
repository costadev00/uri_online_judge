import random
from math import sqrt

def generate_sudoku(m):
    # Create an m x m board filled with zeros
    board = [[0] * m for _ in range(m)]
    
    # Keep generating numbers until the board is filled
    for i in range(m):
        for j in range(m):
            while True:
                # Choose a random number between 1 and m
                num = random.randint(1, m)
                if is_valid(board, i, j, num):
                    # The number is valid, so place it on the board
                    board[i][j] = num
                    break
    return board

def is_valid(board, row, col, num):
    # Check if the number is present in the same row
    if num in board[row]:
        return False
    
    # Check if the number is present in the same column
    for i in range(len(board)):
        if board[i][col] == num:
            return False
    
    # Check if the number is present in the same m x m sub-grid
    m = int(sqrt(len(board)))
    start_row = row - row % m
    start_col = col - col % m
    for i in range(m):
        for j in range(m):
            if board[start_row + i][start_col + j] == num:
                return False
    return True

# Generate a 4 x 4 sudoku board
board = generate_sudoku(9)
print(board)