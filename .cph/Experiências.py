# #include<stdio.h>

# int main() {

#     int n, qtd_cob;
#     float perc_coe, perc_rat, perc_sap, tot_cob = 0, tot_coe = 0, tot_rat = 0, tot_sap = 0;
#     char c;
#     scanf("%d", &n);
#     for (int i = 0; i < n; i++)
#     {
#         scanf("%d %c", &qtd_cob, &c);
#         tot_cob += qtd_cob;
#         switch (c)
#         {
#         case 'C':
#             tot_coe += qtd_cob;
#             /* code */
#             break;
#         case 'R':
#             tot_rat += qtd_cob;
#             /* code */
#             break;
#         case 'S':
#             tot_sap += qtd_cob;
#             /* code */
#             break;
#         }
#     }
#     printf("Total: %.0f cobaias\n", tot_cob);
#     printf("Total de coelhos: %.0f\n", tot_coe);
#     printf("Total de ratos: %.0f\n", tot_rat);
#     printf("Total de sapos: %.0f\n", tot_sap);
#     perc_coe = (tot_coe / tot_cob) * 100;
#     perc_rat = (tot_rat / tot_cob) * 100;
#     perc_sap = (tot_sap / tot_cob) * 100;
#     printf("Percentual de coelhos: %.2f %\n", perc_coe);
#     printf("Percentual de ratos: %.2f %\n", perc_rat);
#     printf("Percentual de sapos: %.2f %\n", perc_sap);
#     return 0;
# }

qtd_cob = 0
perc_coe, perc_rat, perc_sap = 0.0, 0.0, 0.0
tot_cob = 0
tot_coe = 0
tot_rat = 0
tot_sap = 0
c = ''
n = int(input())
for i in range(n):
    qtd_cob, c = (input().split())
    qtd_cob = int(qtd_cob)
    tot_cob += qtd_cob
    if c == 'C':
        tot_coe += qtd_cob
    elif c == 'R':
        tot_rat += qtd_cob
    elif c == 'S':
        tot_sap += qtd_cob
perc_coe = (tot_coe / tot_cob) * 100
perc_rat = (tot_rat / tot_cob) * 100
perc_sap = (tot_sap / tot_cob) * 100
print('Total: {} cobaias'.format(tot_cob))
print('Total de coelhos: {}'.format(tot_coe))
print('Total de ratos: {}'.format(tot_rat))
print('Total de sapos: {}'.format(tot_sap))
print('Percentual de coelhos: {:.2f} %'.format(perc_coe))
print('Percentual de ratos: {:.2f} %'.format(perc_rat))
print('Percentual de sapos: {:.2f} %'.format(perc_sap))
