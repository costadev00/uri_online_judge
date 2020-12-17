/*
TODO SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mes, dia, res = 0, aux = 0, flag = 0;
    int jan = 31, fev = 29, mar = 31, abr = 30, mai = 31, jun = 30, jul = 31, ago = 31, set = 30, out = 31, nov = 30, dez = 31;
    while (cin >> mes >> dia)
    {
        switch (mes)
        {
        case 1:
            mes *= jan;
            flag = 1;
            break;
        case 2:
            mes *= fev;
            break;
        case 3:
            mes *= mar;
            flag = 1;
            break;
        case 4:
            mes *= abr;
            break;
        case 5:
            mes *= mai;
            flag = 1;
            break;
        case 6:
            mes *= jun;
            break;
        case 7:
            mes *= jul;
            flag = 1;
            break;
        case 8:
            mes *= ago;
            flag = 1;
            break;
        case 9:
            mes *= set;
            break;
        case 10:
            mes *= out;
            flag = 1;
            break;
        case 11:
            mes *= nov;
            break;
        case 12:
            mes *= dez;
            flag = 1;
            break;
        }
        res = mes + dia;
        if (flag == 1)
        {
            res -= 397;
        }
        else
        {
            res -= 385;
        }
        // abs(res);
        if (res == -1)
        {
            printf("E vespera de natal!\n");
        }
        else if (res == 0)
        {
            printf("E natal!\n");
        }
        else if (res > 0)
        {
            printf("Ja passou!\n");
        }
        else
        {
            printf("Faltam %d dias para o natal!\n", abs(res));
        }
        flag = 0;
    }
    return 0;
}
