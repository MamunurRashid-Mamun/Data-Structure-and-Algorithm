#include <stdio.h>

void quickSort( int[], int, int);
int partition( int[], int, int);


int main()
{
    int a[100] ;//= { 0,7, 12, 1, -2, 0, 15, 4, 11, 9};
    int i, n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    //int i;
    printf("\n\nUnsorted array is:  ");
    for(i = 1; i <= n; ++i)
        printf(" %d ", a[i]);

    quickSort( a, 1, n);

    printf("\n\nSorted array is:  ");
    for(i = 1; i <= n; ++i)
        printf(" %d ", a[i]);

}



void quickSort( int a[], int p, int q)
{
    int j;

    if( p < q )
    {
        // divide and conquer
        j = partition( a, p, q);
        quickSort( a, p, j-1);
        quickSort( a, j+1, q);
    }

}



int partition( int a[], int m, int p)
{
    int v, i, j, t;
    v = a[m];
    i = m;
    j = p+1;

    while(1)
    {
        do ++i;
        while( a[i] <= v && i <= p );
        do --j;
        while( a[j] > v );
        if( i >= j ) break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    t = a[m];
    a[m] = a[j];
    a[j] = t;
    return j;
}
