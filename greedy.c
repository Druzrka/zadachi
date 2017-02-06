#include <cs50.h>
#include <stdio.h>

int change;
int coins;

int main(void)
{
    printf("O hai! How much change is owed?\n");
    change=get_int();
    while(0<change)
    {
        if(change-25>=0)
        {
            change-=25;
            coins+=1;
            continue;
        }
        if(change-10>=0)
        {
            change-=10;
            coins+=1;
            continue;
        }
        if(change-5>=0)
        {
            change-=5;
            coins+=1;
            continue;
        }
        if(change-1>=0)
        {
            change-=1;
            coins+=1;
            continue;
        }
    }
     printf("%i",coins);
}