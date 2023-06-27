
#include<stdio.h>
int main()
{
   int  DD, MM, YYYY;
   printf("Enter the date on this formate: DD/MM/YYYY \n");
   scanf("%d / %d / %d", &DD,&MM,&YYYY);
 int  Day = DD;
  int Month = MM;
 int  Year = YYYY;
   printf("Day = %d, Month = %d, Year = %d", Day,Month,Year);
   getch();

    return 0;
}
