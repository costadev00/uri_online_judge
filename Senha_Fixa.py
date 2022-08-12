while True:
    try:
       x = input()
       if x == '2002':
        print("Acesso Permitido")
        break
       else:
        print("Senha Invalida")
    except EOFError:
        break