#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
int nc, n, x;
vector<int> arr;

void printArray(vector<int> &arr)
{
    int aux = 0;
    for (int i = 0; i < arr.size(); i++)
    {

        if (aux + 1 != arr.size())
        {
            cout << arr[i] << " ";
        }
        else
        {
            cout << arr[i];
        }
        aux++;
    }
    cout << "\n";
}
void countSort(vector<int> &arr)
{
    int max = *max_element(arr.begin(), arr.end());
    int min = *min_element(arr.begin(), arr.end());
    int range = max - min + 1;

    vector<int> count(range), output(arr.size());
    for (int i = 0; i < arr.size(); i++)
        count[arr[i] - min]++;

    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    for (int i = 0; i < arr.size(); i++)
        arr[i] = output[i];
    printArray(arr);
}

int main()
{
    fastio;
    cin >> nc;
    while (nc--)
    {
        cin >> n;
        while (n--)
        {
            cin >> x;
            arr.push_back(x);
        }
        countSort(arr);
        arr.clear();
    }
    return 0;
}