#include"stdio.h"
void solve(int last_num,int first_num);
int main()
{
    int n,i;
    printf("enter first number>>");
    scanf("%d",&i);
    printf("enter last number>>");
    scanf("%d",&n);
    solve(n,i);
    return 0;
}
void solve(int last_num,int first_num)
{
    if( last_num<first_num)return;
    printf("%d ",last_num);
    solve(last_num-1,first_num);
}
