def main():
    a = int(input())
    if(a==10):
        print("oi")

while True:
    try:
        if __name__ == "__main__":
            main()
    except EOFError:
        break