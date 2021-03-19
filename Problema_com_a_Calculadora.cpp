TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

void extractIntegerWords(string str)
{
    int soma = 0;
    stringstream ss;

    /* Storing the whole string into string stream */
    ss << str;

    /* Running loop till the end of the stream */
    string temp;
    int found;
    while (!ss.eof())
    {

        /* extracting word by word from stream */
        ss >> temp;

        /* Checking the given word is integer or not */
        if (stringstream(temp) >> found)
            soma += found;

        /* To save from space at the end of string */
        // temp = "";
    }
    cout << soma << endl;
}

// Driver code
int main()
{
    string str = "Ab23s249ttu21";
    extractIntegerWords(str);
    return 0;
}
