

#include <stdio.h>

void pyramid()
{
    int pyramidSize = 0;
    int spaceCounter = 0;
    printf("please enter the layers of your pyramid\n");
    scanf("%d", &pyramidSize);
    spaceCounter = pyramidSize;

    for (int i = 1; i <= (pyramidSize * 2); i += 2)
    {
        for (int g = spaceCounter; g > 0; g--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
        spaceCounter--;
    }
}
void invertedPyramid()
{
    int pyramidSize = 0;
    int spaceCounter = 0;
    printf("please enter the layers of your pyramid\n");
    scanf("%d", &pyramidSize);
    spaceCounter = pyramidSize;

    for (int i = 1; i <= (pyramidSize * 2); i += 2)
    {
        for (int g = spaceCounter; g > 0; g--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
        spaceCounter--;
    }
}
int main()
{
    printf("Hello and welcome to your Shape Generator!!!\n"); 
    printf("Please select below, how you would like to proceed.\n");
    printf("\n1. Enter 1 : To Generate pyramid.")


    pyramid();
    return 0;
}