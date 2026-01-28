

#include <stdio.h>
void greeting();
void pyramid();
void invertedPyramid();
void diamond();
void circle();

int main()
{
    int userChoice;
    greeting();
    scanf("%d", &userChoice);

    switch (userChoice)
    {
    case 1:
        pyramid();
        break;
    case 2:
        invertedPyramid();
        break;
    case 3:
        diamond();
        break;

    case 4:
        circle();
        break;

    default:
        printf("Please Select Between 1 through 4");
    }

    return 0;
}
/*
    This is the greeting function that
    welcomes the user and asks them which of the
    current available functions they would like to perform.
*/
void greeting()
{
    printf("Hello and welcome to your Shape Generator!!!\n");
    printf("Please select below, how you would like to proceed.\n");
    printf("\n1. Enter 1 : To Generate a pyramid.\n2. Enter 2 : To Generate an inverted Pyramid");
    printf("\n3. Enter 3 : To Generate a Diamond.\n4. Enter 4 : To Generate a Circle\n");
}

void pyramid()
{
    int pyramidSize = 0;
    int spaceCounter = 0;
    printf("please enter the layers of your pyramid\n");
    scanf("%d", &pyramidSize);
    spaceCounter = pyramidSize;

    for (int i = 1; i <= (pyramidSize * 2); i += 2)
    {
        for (int z = 0; z < 15; z++)
        {
            printf(" ");
        }
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
    int invPyramidSize = 0;
    int invSpaceCounter = 0;
    printf("please enter the layers of your inverted pyramid\n");
    scanf("%d", &invPyramidSize);
    invSpaceCounter = 1;
    for (int i = (invPyramidSize * 2) - 1; i >= 1; i -= 2)
    {
        for (int z = 0; z < 15; z++)
        {
            printf(" ");
        }
        for (int k = 0; k <= invSpaceCounter; k++)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("#");
        }

        printf("\n");
        invSpaceCounter++;
    }
}

void diamond()
{
    int diamondSize;
    int pyramidSize;
    int invPyramidSize;
    int invSpaceCounter = 1;
    int spaceCounter;
    printf("please enter the layers of your diamond. Minimum 4 Layers!!!\n");
    scanf("%d", &diamondSize);

    pyramidSize = diamondSize / 2;
    spaceCounter = pyramidSize;
    invPyramidSize = diamondSize / 2;

    for (int i = 1; i <= (pyramidSize * 2); i += 2)
    {
        for (int z = 0; z < 15; z++)
        {
            printf(" ");
        }
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
    for (int i = (invPyramidSize * 2) - 1; i >= 1; i -= 2)
    {
        for (int z = 0; z < 15; z++)
        {
            printf(" ");
        }
        for (int k = 0; k <= spaceCounter; k++)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("#");
        }

        printf("\n");
        spaceCounter++;
    }
}

void circle(){
    printf("Still figuring this out give me time 😪"); 
}