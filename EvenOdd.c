#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a number of your choice:");
    scanf("%d",&a);
    if (a%2 ==0)
    {
        printf("The number chosen by you is even.");
    }
    else{
        printf("The number Chosen By you is odd.");
    }
    return 0;
}
