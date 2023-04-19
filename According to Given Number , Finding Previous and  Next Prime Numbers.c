#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>

void Prime(int num);

int main(void)
{
    time_t Time;
    Time=time(NULL);
    struct tm *Tm=localtime(&Time);
    printf("\n\e[1mWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
    int num;
    char ch;
    while(1)
    {
        printf("\n\e[1;36mWrite a Number :\e[0m ");
        scanf("%d",&num);
        if (num<2)
        {
            printf("\n\e[1;4;31mInvalid Number...\nPlease Write Again...\n\a\e[0m");
            continue;
        }


        Prime(num);
        while(1)
        {
            printf("\n\e[1;35mWould You Like To Contunie (Y/N) :\e[0m ");
            ch=getche();
            if(ch=='Y' || ch=='y')
            {
                Sleep(2000);
                break;
            }
            else if (ch=='N' || ch=='n')
            {
                Time=time(NULL);
                Tm=localtime(&Time);
                printf("\n\e[1;32mmWelcome To Program...\n%.2d : %.2d : %.2d  %.2d / %.2d / %.2d\e[0m",Tm->tm_hour,Tm->tm_min,Tm->tm_sec,Tm->tm_mday,Tm->tm_mon+1,Tm->tm_year+1900);
                _exit(0);
            }
            else
            {
                printf("\n\e[1;4;31mWrong Character...\nPlease Write Again...\n\a\e[0m");
            }
        }

    }
}
void Prime(int num)
{
    int state;
    if(num==2)
    {
        printf("\e[1;31mThe Smallest Prime Number : %d",num);
        for(int i=num+1;; i++)
        {
            state=0;
            for (int j=2; j<i; j++)
            {

                if(i%j==0)
                {
                    state++;
                    break;
                }
            }
            if(state==0)
            {
                printf("\n\e[1;32mThe Smallest Prime Number is Greater Than \e[1;30m%d: \e[1;37m%d",num,i);
                break;
            }

        }
    }
    else
    {
        for(int i=num+1;; i++)
        {
            state=0;
            for(int j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    state++;
                    break;
                }

            }
            if(state==0)
            {
                printf("\n\e[1;32mThe Smallest Prime Number is Greater Than \e[1;30m%d: \e[1;37m%d",num,i);
                break;
            }

        }
        for(int i=num-1; i>2; i--)
        {
            state=0;
            for(int j=2; j<i; j++)
            {
                if(i%j==0)
                {
                    state++;
                    break;
                }

            }
            if(state==0)
            {
                printf("\n\e[1;33mThe Biggest Prime Number is Smaller Than \e[1;30m%d: \e[1;37m%d",num,i);
                break;
            }

        }
    }

}










