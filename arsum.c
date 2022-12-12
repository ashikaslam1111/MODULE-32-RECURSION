#include<stdio.h>
int solve(int arr[],int i,int n);
int main()
{
    int n=3;
    int i;
    int ar[30];
    for(i=0; i<n; i++)
    {

        scanf("%d",&ar[i]);
    }
    int sum=solve(ar,0,n);
    printf("%d",sum);
    return 0;
}
int solve(int arr[],int i,int n)
{
    if (i==n)return 0;
    int s=solve(arr,i+1,n);
    return s+arr[i];
}
