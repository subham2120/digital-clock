#include<stdio.h>
#include<conio.h>
#include<unistd.h>
int main()
{
    int h,m,s;
    double i;
    printf("enter a time in the formate of HH:MM:SS\n");
    scanf("%d",&h);
    scanf("%d",&m);
    while(1)
    {
        for(h;h<24;h++)
        {
            for(m;m<60;m++)
            {           
                 
                for(s=1;s<60;s++)
                {
                    system("cls");
                    printf("\n\n\n\t\t\t%d:%d:%d",h,m,s);
                    if(h<12)
                    printf("am");
                    else
                    printf("pm");
                    for(i=1;i<3619999;i++)
                    i++;
                    i--;
                    sleep(1);         
                }
            s=0;
            }
        m=0;
        }
    h=0;
}
    
    
}
