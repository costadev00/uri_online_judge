/*

*/
#include <iostream>
using namespace std;
int main()
{
    int n, arj1, dj1, arj2, dj2, arj3, dj3, arm1, dm1, arm2, dm2, arm3, dm3;
    int acm_joao, acm_maria;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        acm_joao = 0;
        acm_maria = 0;
        cin >> arj1;
        cin >> dj1;
        acm_joao += arj1 * dj1;
        cin >> arj2;
        cin >> dj2;
        acm_joao += arj2 * dj2;
        cin >> arj3;
        cin >> dj3;
        acm_joao += arj3 * dj3;

        cin >> arm1;
        cin >> dm1;
        acm_maria += arm1 * dm1;
        cin >> arm2;
        cin >> dm2;
        acm_maria += arm2 * dm2;
        cin >> arm3;
        cin >> dm3;
        acm_maria += arm3 * dm3;

        if (acm_joao > acm_maria)
        {
            cout << "JOAO" << endl;
        }
        else
        {
            cout << "MARIA" << endl;
        }
    }
    return 0;
}