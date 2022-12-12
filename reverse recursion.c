#include"stdio.h"
void reverse(int fast,int last);
int main()
{
    reverse(4,10);
    return 0;
}
void reverse(int fast,int last)
{
    if(fast>last)return;
    reverse(fast+1,last);
    printf("%d ",fast);
}
