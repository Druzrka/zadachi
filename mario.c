#include <cs50.h>
#include <stdio.h>

int get_height(void);
void bild_stairs(int height);

int main(void)
{
    int height=get_height();
    bild_stairs(height);
}

int get_height(void)
{
int height=0;
    do{
    printf("Height:");
    height = get_int();
    }while(height<0);
    if (height >= 24) height = 2;
    return height;
}
void bild_stairs(int height)
{
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
