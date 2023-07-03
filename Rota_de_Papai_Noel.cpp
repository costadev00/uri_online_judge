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

// create a class child that has name, region and distance
class Child
{
public:
    string name;
    char region;
    int distance;
    Child(string name, char region, int distance)
    {
        this->name = name;
        this->region = region;
        this->distance = distance;
    }
};
int main()
{
    int n;
    cin >> n;
    // create a vector of children
    vector<Child> children;
    FOR(i, 0, n)
    {
        string nome;
        char r;
        int d;
        cin >> nome >> r >> d;
        // create a child and add it to the vector
        Child c(nome, r, d);
        children.push_back(c);
    }
    // sort the vector by region and distance
    sort(children.begin(), children.end(), [](Child a, Child b)
         {
        if (a.region != b.region)
            return a.region < b.region; 
        else if(a.distance != b.distance)
            return a.distance < b.distance;
        else
            return a.name< b.name; });
    // print the children
    for (auto c : children)
        cout << c.name << endl;
    return 0;
}