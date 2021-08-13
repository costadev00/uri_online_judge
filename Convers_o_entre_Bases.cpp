TODO : SOLVE
#include <bits/stdc++.h>

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

void binaryToHexa(string n)
{
    int binaryNum;
    stringstream(n) >> binaryNum;
    int hex = 0, mul = 1, chk = 1, rem, i = 0;
    char hexDecNum[20];
    while (binaryNum != 0)
    {
        rem = binaryNum % 10;
        hex = hex + (rem * mul);
        if (chk % 4 == 0)
        {
            if (hex < 10)
                hexDecNum[i] = hex + 48;
            else
                hexDecNum[i] = hex + 55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul * 2;
            chk++;
        }
        binaryNum = binaryNum / 10;
    }
    if (chk != 1)
        hexDecNum[i] = hex + 48;
    if (chk == 1)
        i--;
    for (i = i; i >= 0; i--)
        cout << hexDecNum[i];
}

void decToBin(string exp)
{
    int n;
    stringstream(exp) >> n;
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int binaryToDec(string n)
{
    int num;
    stringstream(n) >> num;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }
    return dec_value;
}
void hexaToBinary(string hexdec)
{
    long int i = 0;

    while (hexdec[i])
    {

        switch (hexdec[i])
        {
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "
                 << hexdec[i];
        }
        i++;
    }
}
int hexToDec(string s)
{
    int n;
    stringstream ss;
    ss << hex << s;
    ss >> n;
    return n;
}
int main()
{
    int t;
    string exp, n;
    while (cin >> t)
    {
        cin.ignore();
        for (int i = 1; i <= t; i++)
        {
            cin >> n;
            cin >> exp;

            if (exp[0] == 'b')
            {
                cout << "Case " << i << ":" << endl;
                cout << binaryToDec(n);
                cout << " dec" << endl;
                binaryToHexa(n);
                cout << " hex" << endl;
            }
            else if (exp[0] == 'd')
            {
                cout << "Case " << i << ":" << endl;
                int x;
                stringstream(n) >> x;
                printf("%x hex\n", x);
                decToBin(n);
                cout << " bin" << endl;
            }
            else
            {
                cout << "Case " << i << ":" << endl;
                cout << hexToDec(n);
                cout << " dec" << endl;
                hexaToBinary(n);
                cout << " bin" << endl;
            }
            cout << endl;
        }
    }
    return 0;
}