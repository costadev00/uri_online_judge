while True:
    try:
        cordinatex,cordinatey = input().split()
        cordinatex = int(cordinatex)
        cordinatey = int(cordinatey)

        if cordinatex > 0 and cordinatey > 0:
            print("primeiro")
        elif cordinatex < 0 and cordinatey > 0:
            print("segundo")
        elif cordinatex < 0 and cordinatey < 0:
            print("terceiro")
        elif cordinatex > 0 and cordinatey < 0:
            print("quarto")
    except EOFError:
        break