import math
# a function that recives a salary and returns an increased salary
#if the salary is beetween 0 and 400.00, the salary will be increased by 15%
#if the salary is beetween 400.01 and 800.00, the salary will be increased by 12%
#if the salary is beetween 800.01 and 1200.00, the salary will be increased by 10%
#if the salary is more than 1200.00, the salary will be increased by 7%
#if the salary is above 2000.00 the salary will be increased by 4%
#the function will return the new salary
def aumento_salario(salary):
    if salary <= 400.00:
        return salary + (salary * 0.15)
    elif salary <= 800.00:
        return salary + (salary * 0.12)
    elif salary <= 1200.00:
        return salary + (salary * 0.10)
    elif salary <= 2000.00:
        return salary + (salary * 0.07)
    else:
        return salary + (salary * 0.04)

salary = input()
salary = float(salary)
print("Novo salario: {:.2f}".format(aumento_salario(salary)))
print("Reajuste ganho: {:.2f}".format(aumento_salario(salary) - salary))
print("Em percentual: {:.0f} %".format(((aumento_salario(salary) - salary) / salary * 100)))