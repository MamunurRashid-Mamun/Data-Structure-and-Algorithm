#include<stdio.h>
#include<stdlib.h>
int bin_search(long search_value, long maxindex, long a[]);
int main()
{
    long a[10000],array_size,i,maxindex,search_value;
    int x;
    printf("input size of array and element of array in ascending order: ");
    scanf("%ld",&array_size);
    maxindex=array_size-1;
    for(i=0; i<array_size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("input search value: ");
    scanf("%ld",&search_value);
    x=bin_search(search_value,maxindex,a);
    if(x==1)
        printf("\nValue found\n");
    else
        printf("\nValue not found.\n");
    return 0;
}


int bin_search(long search_value, long maxindex, long a[])
{
    long beg=0,en,mid;
    int output=0;
    en=maxindex;
    mid=(int)(en+beg)/2;
    while(1)
    {
        if(search_value>a[maxindex]||search_value<a[beg])
            break;
        if(a[mid]==search_value)
        {
            output=1;
            break;
        }
        else if(a[mid]>search_value)
        {
            beg=beg;
            en=mid-1;
            mid=(int)(en+beg)/2;
        }
        else if(a[mid]<search_value)
        {
            beg=mid+1;
            en=en;
            mid=(int)(en+beg)/2;
        }

    }
    return output;

}
