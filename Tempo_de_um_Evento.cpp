#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int diai = 0, horai = 0, mini = 0, segi = 0;
    int diaf = 0, horaf = 0, minf = 0, segf = 0;
    int diar = 0, horar = 0, minr = 0, segr = 0;
    scanf("Dia %d", &diai);
    scanf("%d : %d : %d\n", &horai, &mini, &segi);
    scanf("Dia %d", &diaf);
    scanf("%d : %d : %d", &horaf, &minf, &segf);

    segr = segf - segi;
    if (segr < 0)
    {
        minr--;
        segr += 60;
    }
    minr += minf - mini;
    if (minr < 0)
    {
        horar--;
        minr += 60;
    }
    horar += horaf - horai;
    if (horar < 0)
    {
        diar--;
        horar += 24;
    }
    diar += diaf - diai;
    printf("%d dia(s)\n", diar);
    printf("%d hora(s)\n", horar);
    printf("%d minuto(s)\n", minr);
    printf("%d segundo(s)\n", segr);
    return 0;
}