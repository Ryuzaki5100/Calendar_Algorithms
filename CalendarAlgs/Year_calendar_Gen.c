#include <stdio.h>
char months[12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
char arr[7][5] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
void Cal_gen(int m, int y)
{
    int det = 0;
    int day = (1 + 2 / m + m / 2 + (9 / m) * (m / 9) + (11 / m) * (m / 11) + 3 * (10 * m + 1) + ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? (-(1 / m)) : ((m / 2) * (2 / m))) + y % 100 + (y % 100) / 4 + 2 * (3 - (y / 100) % 4)) % 7;
    int lim = 30 + (m + m / 8) % 2 - ((y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? ((m / 2) * (2 / m)) : (2 * (m / 2) * (2 / m)));
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("|\t         %s %4d\t    \t  |\n", months[m - 1], y);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n| ");
    for (int i = 0; i < 7; i++)
        printf("%s | ", arr[i]);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n| ");
    for (; det < day; det++)
        printf("  - | ");
    for (int i = 1; i <= lim; i++)
    {
        printf(" %2d | ", i);
        if ((det + i) % 7 == 0)
            printf("\n-------------------------------------------\n| ");
    }
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}
void main()
{
    int y;
    printf("Enter the year for which the calendar has to be generated --> ");
    scanf("%d", &y);
    for (int i = 1; i <= 12; i++)
        Cal_gen(i, y);
}
