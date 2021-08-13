#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

typedef struct
{
    int ouro = 0, prata = 0, bronze = 0;
} Pais;

bool cmp(pair<string, Pais> &a, pair<string, Pais> &b)
{
    if (a.second.ouro != b.second.ouro)
        return a.second.ouro > b.second.ouro;
    else if (a.second.prata != b.second.prata)
        return a.second.prata > b.second.prata;
    else if (a.second.bronze != b.second.bronze)
        return a.second.bronze > b.second.bronze;
    else
        return a.first < b.first;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort(unordered_map<string, Pais> &M)
{

    // Declare vector of pairs
    vector<pair<string, Pais>> A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto &it : M)
    {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value
    for (auto &it : A)
    {

        cout << it.first << " "
             << it.second.ouro << " " << it.second.prata << " " << it.second.bronze << endl;
    }
}
int main()
{
    fastio;
    string desc, med;
    unordered_map<string, Pais> mp;
    while (read(desc))
    {
        read(med);
        // mp[med].nome = med;
        //ouro
        mp[med]
            .ouro++;
        //prata
        read(med);
        mp[med].prata++;
        //bronze
        read(med);
        mp[med].bronze++;
    }
    cout << "Quadro de Medalhas\n";
    sort(mp);

    // for (auto i : mp)
    // {
    //     cout << i.first << " " << i.second.ouro << " " << i.second.prata << " " << i.second.bronze << endl;
    // }

    return 0;
}