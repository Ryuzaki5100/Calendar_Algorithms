#include <stdio.h>
void main()
{
    int d,m,y;
    char arr[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    printf("Enter a date in the given format (dd/mm/yyyy) ");
    scanf("%d/%d/%d",&d,&m,&y);
    printf("\n%d/%d/%d was on a %s",d,m,y,arr[(d+2/m+m/2+(9/m)*(m/9)+(11/m)*(m/11)+3*(10*m+1)+((y%400==0||(y%4==0&&y%100!=0))?(-(1/m)):((m/2)*(2/m)))+y%100+(y%100)/4+2*(3-(y/100)%4))%7]);
}