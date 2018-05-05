#include<stdio.h>
#include<iostream>
using namespace std;
double maxSumArr[100], suffixMaxArr[100];
void MSCS(double a[], int n);
int main()
{
    int n, i, j;
    double a[100], sum;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter elements of array: ");
    for(i = 1; i <= n; i++)
        scanf("%lf",&a[i]);
    MSCS(a,n);
    maxSumArr[0] = 0;
    suffixMaxArr[0] = 0;
    for(i = 0; i <= n; i++)
        cout<<maxSumArr[i]<<" ";
    printf("\n");
    for(i = 0; i <= n; i++)
        cout<<suffixMaxArr[i]<<" ";
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        if(suffixMaxArr[i+1]>suffixMaxArr[i])
        {
            sum = suffixMaxArr[i+1];
            j = i+1;
        }
    }
    cout<<"Maximum sum is: "<<sum<<endl;
    cout<<"Sequence is: "<<endl;
    while(suffixMaxArr[j] != 0)
    {
        cout<<a[j]<<" ";
        j--;
    }
    return 0;
}

void MSCS(double a[], int n)
{
    int maxSum=0, suffixMax=0;
    for(int i=1; i<=n; i++)
    {
        if(suffixMax + a[i] > maxSum)
        {
            maxSum = suffixMax + a[i];
            suffixMax = maxSum;
            maxSumArr[i] = maxSum;
            suffixMaxArr[i] = suffixMax;
        }
        else if(suffixMax + a[i] > 0)
        {
            suffixMax = suffixMax + a[i];
            maxSumArr[i] = maxSum;
            suffixMaxArr[i] = suffixMax;
        }
        else
        {
            suffixMax = 0;
            maxSumArr[i] = maxSum;
            suffixMaxArr[i] = suffixMax;
        }
    }
}
