#include<stdio.h>
int solve(int arr[],int n);
int main()
{
    int n=3;
    int i;
    int ar[30];
    for(i=0; i<n; i++)
    {

        scanf("%d",&ar[i]);
    }
    int sum=solve(ar,n);
    printf("%d",sum);
    return 0;
}
int solve(int arr[],int n)
{
if(n==0)return 0;
    int s=solve(arr+1,n-1);
    return s+arr[0];
}
