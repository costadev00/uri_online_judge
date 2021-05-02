#include <bits/stdc++.h>

using namespace std;

struct Pais
{
    string nome;
    int ouro = 0, prata = 0, bronze = 0;
};

bool order(Pais p1, Pais p2)
{
    if (p1.ouro != p2.ouro)
        return p1.ouro > p2.ouro;
    if (p1.prata != p2.prata)
        return p1.prata > p2.prata;
    if (p1.bronze != p2.bronze)
        return p1.bronze > p2.bronze;
    return p1.nome < p2.nome;
}

int main()
{
    Pais tmp;
    string in;
    map<string, Pais> mPaises;
    vector<Pais> vPaises;

    while (getline(cin, in))
    {
        for (int i = 0; i < 3; i++)
        {
            getline(cin, in);

            if (i == 0)
                mPaises[in].ouro++;
            if (i == 1)
                mPaises[in].prata++;
            if (i == 2)
                mPaises[in].bronze++;
            mPaises[in].nome = in;
        }
    }

    for (auto it = mPaises.begin(); it != mPaises.end(); it++)
    {
        Pais p = it->second;
        vPaises.push_back(p);
    }

    sort(vPaises.begin(), vPaises.end(), order);

    cout << "Quadro de Medalhas" << endl;
    for (int i = 0; i < vPaises.size(); i++)
    {
        Pais p = vPaises[i];
        cout << p.nome << " " << p.ouro << " " << p.prata << " " << p.bronze << endl;
    }

    return 0;
}