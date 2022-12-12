#include"stdio.h"
int sum(int i,int num);
int main()
{
    int n=5;
    int x = sum(1,n);
    printf("%d",x);
    return 0;
}
int sum(int i,int num)
{
    int s;
    if(i>num)return 0;
    s=sum(i+1,num);
    return s+i;
}
