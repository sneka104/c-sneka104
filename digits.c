#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    switch(n)
    {
        case 0:
            printf("Zero.");
            break;
        case 1:
            printf("One.");
            break;
        default:
            printf("Not zero or one.");
    }
}
