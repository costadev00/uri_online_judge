// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char s[5], s1[5];
//     cin >> s;
//     cin >> s1;
//     int i, j;
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         if (i == 0)
//         {
//             if (s[i] + 2 == s1[i] || s[i] - 2 == s1[i])
//                 j = 1;
//             else
//             {
//                 j = 0;
//                 break;
//             }
//         }
//         else if (i == 1)
//         {
//             if (s[i] + 1 == s1[i] || s[i] - 1 == s1[i])
//                 j = 1;
//             else
//             {
//                 j = 0;
//                 break;
//             }
//         }
//     }
//     if (j == 1)
//         cout << "VALIDO" << endl;
//     else if (j == 0)
//         cout << "INVALIDO" << endl;
//     return 0;
// }