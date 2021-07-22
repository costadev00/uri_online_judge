#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

typedef struct
{
    char letra;
    int freq;

} Letra;
int cont = 0;
bool compare(Letra a, Letra b)
{
    return a.freq > b.freq;
}
int main()
{
    fastio;
    int n;

    while (cin >> n)
    {
        cin.ignore();
        string str, res;
        while (n--)
        {
            read(str);
            int tam = str.length();
            Letra l[tam];
            int j = 0;
            bool existe = false;
            for (int i = 0; i < str.length(); i++)
            {
                for (int k = 0; k < j; k++)
                {
                    if (l[k].letra == str[i])
                        existe = true;
                }
                if (!existe)
                {
                    l[j].letra = tolower(str[i]);
                    l[j].freq = count(str.begin(), str.end(), str[i]);
                    // res.push_back(tolower(str[i]));
                    j++;
                }
            }
            stable_sort(l, l + j, compare);
            for (int i = 0; i < j; i++)
            {
                if (l[i].freq >= l[i + 1].freq)
                    res.pb(l[i].letra);
            }
            // cout << l[0].letra;
            // cout << l[1].letra;
            // cout << l[2].letra;
            for (auto i : res)
                cout << i;
            cout << endl;
            res.clear();
            cont = 0;
        }
    }
    return 0;
}
// #include <bits/stdc++.h>
// #define fastio                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL)

// using namespace std;

// typedef long long ll;
// typedef long double ld;

// #define endl "\n"
// #define debug(args...) printf(args)
// #define MOD 1000000007
// #define vi vector<int>
// #define pb push_back
// #define read(st) getline(cin, st)
// #define FOR(i, a, b) for (int i = a; i < b; i++)

// int main()
// {
//     fastio;
//     int n;
//     while (cin >> n)
//     {
//         cin.ignore();
//         string str, str2;
//         while (n--)
//         {
//             read(str);
//             string res;
//             int maior = -1;
//             int cont = 1;
//             for (int i = 0; i < str.length(); i++)
//             {
//                 if (isalpha(str[i]) != 0)
//                 {

//                     int qtd = count(str.begin(), str.end(), str[i]);
//                     if (qtd > maior)
//                     {
//                         maior = qtd;
//                         bool existe = false;
//                         for (int j = 0; j < res.length(); j++)
//                         {
//                             if (str[i] == res[j])
//                             {
//                                 existe = true;
//                                 break;
//                             }
//                         }
//                         if (!existe)
//                         {
//                             if (res.length() > 1)
//                             {
//                                 res.clear();
//                             }
//                             res.pb(str[i]);
//                             cont += 1;
//                         }
//                     }
//                     else if (qtd == maior)
//                     {
//                         bool existe = false;
//                         for (int j = 0; j < res.length(); j++)
//                         {
//                             if (str[i] == res[j])
//                             {
//                                 existe = true;
//                             }
//                         }
//                         if (!existe)
//                         {
//                             // if (cont > 1)
//                             // res.pop_back();
//                             res.pb(str[i]);
//                             // cont += 1;
//                         }
//                     }
//                 }
//             }
//             sort(res.begin(), res.end());
//             transform(res.begin(), res.end(), res.begin(), ::tolower);

//             cout << res << endl;
//             // cout << cont << endl;
//             res.clear();
//         }
//     }
//     return 0;
// }