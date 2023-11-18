#include<stdio.h>
int main()
{
    int n,a,b,s;
    printf("Enter no. as fiven below to calculate\n");
    printf("1.Add: 2.Subtract: 3.Multiply 4.Division");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        {
            s=a+b;
            printf("%d",s);
            break;
        }
        case 2:
        {
            s=a*b;
            printf("%d",s);
            break;
        }
        case 3:
        {
            s=a-b;
            printf("%d",s);
            break;

        }
        case 4:
        {
            s=a/b;
            printf("%f",s);
        }
        default:
        break;


    }
    return 0;

    
}