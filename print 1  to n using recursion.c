#include"stdio.h"
void solve(int first_num,int last_num);
int main()
{
    int n,i;
    printf("enter first number>>");
    scanf("%d",&i);
    printf("enter last number>>");
    scanf("%d",&n);
    solve(i,n);
    return 0;
}
void solve(int first_num,int last_num)
{
    if(first_num > last_num)return;
    printf("%d ",first_num);
    solve(first_num+1,last_num);
}
