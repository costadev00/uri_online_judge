/*
!!!! Este problema ainda está a ser analisado, pois as entradas e saidas verificadas seguem correstas, porém nao conseguimos "Accepeted" como resposta
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    stack<char> s;
    int cont, tam = 0;
    char exp[10001];
    while (fgets(exp, 10000, stdin))
    {
        // if (!EOF)
        // {
        //     break;
        // }
        cont = 0;
        tam = strlen(exp);

        if (exp[0] == ')' || exp[tam] == '(')
        {
            cout << "incorrect" << endl;
            continue;
        }

        for (int i = 0; i < tam - 1; i++)
        {
            if (exp[i] == '(')
            {
                s.push(exp[i]);
                // cont++;
            }
            if (exp[i] == ')')
            {
                s.push(exp[i]);
                // cont--;
            }
        }

        while (!s.empty())
        {
            if (s.top() == ')')
            {
                cont--;
            }
            if (s.top() == '(')
            {
                cont++;
            }
            s.pop();
        }
        if (cont == 0)
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
    }
    return 0;
}