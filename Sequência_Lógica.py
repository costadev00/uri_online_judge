# while (j <= qtd * 2)
# {
#     if (j % 2 == 0)
#     {
#         first = i;
#         second = first * first;
#         third = first * second;
#         printf("%d %d %d\n", first, second + 1, third + 1);
#         i += 1;
#     }
#     else
#     {
#         first = i;
#         second = first * first;
#         third = first * second;
#         printf("%d %d %d\n", first, second, third);
#     }
#     j += 1;
# }

i = 1
j = 1
first, second, third = 0, 0, 0
qtd = int(input())
while j <= qtd*2:
    if j % 2 == 0:
        first = i
        second = first*first
        third = first*second
        print(first, second+1, third+1)
        i += 1
    else:
        first = i
        second = first*first
        third = first*second
        print(first, second, third)
    j += 1
