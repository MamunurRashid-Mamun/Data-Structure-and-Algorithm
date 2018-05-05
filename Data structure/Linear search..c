#include<stdio.h>
int main()
{
    int i,sizeOfArray,a[10000],search_value,output=0;
    printf("Enter size of array. ");
    scanf("%d",&sizeOfArray);
    printf("Enter element of array.\n");
    for(i=0; i<sizeOfArray; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter search value: ");
    scanf("%d",&search_value);
    for(i=0; i<sizeOfArray; i++)
    {
        if(a[i]==search_value)
        {
            output=1;
            break;
        }
    }
    if(output==1)
        printf("\nValue found.\n");
    else
        printf("\nValue not found.\n");
    return 0;
}
