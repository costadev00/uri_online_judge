# a function that reads a salary and returns the tax to pay
# if the salary is beetween 0 and 2000.00, the tax to pay is zero
# if the salary is beetween 2000.01 and 3000.00, the tax to pay is 8%
# if the salary is beetween 3000.01 and 4500.00, the tax to pay is 18%
# if the salary is above 4500.00, the tax to pay is 28%
# the function will return the tax to pay
def imposto_de_renda(salary):
    if salary > 4500.00:
        imposto = 1000 * 0.08 + 1500 * 0.18 + (salary - 4500) * 0.28
    elif salary > 3000.00:
        imposto = 1000 * 0.08 + (salary - 3000) * 0.18
    elif salary > 2000.00:
        imposto = (salary - 2000) * 0.08

    if salary > 2000:
        print("R$ {:.2f}".format(imposto))
    else:
        print("Isento")


salary = input()
salary = float(salary)
imposto_de_renda(salary)
