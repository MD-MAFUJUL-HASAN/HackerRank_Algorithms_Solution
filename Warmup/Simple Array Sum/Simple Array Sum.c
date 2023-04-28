#include <stdio.h>
int main()
{
    int n[1000],i,a,sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        sum += n[i];
    }
    printf("%d",sum);
    return 0;
}
