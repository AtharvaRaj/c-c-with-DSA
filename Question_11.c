
#include<stdio.h>
int main()
{

    int HH, MM, SS;
    printf("Enter the time in format of\n \"HH:MM:SS\" \n");
    scanf("%d : %d : %d",&HH ,&MM ,&SS);
    int Hours = HH;
    int Minutes = MM;
    int Secounds = SS;
    printf("%d = Hours, %d = Minutes, %d = Secounds",Hours,Minutes,Secounds);
    getch();
    return 0;

}
