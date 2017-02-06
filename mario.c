#include <cs50.h>
#include <stdio.h>

int height;

int main(void)
{
    printf("height:");
    height = get_int();
    for (int i=1; i<height+1; i++)
    {
        for(int j=0; j<height-i; j++)
        {
            printf(" ");
        }
        for(int k=0; k<i+1; k++)
        {
           printf("#"); 
        }
        printf("\n");
    }
}