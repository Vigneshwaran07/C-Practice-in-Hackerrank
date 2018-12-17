#include<stdio.h>
int main()
{

    int a[1000], n = 0,i=0, tot = 0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
     for(i=0;i<n;i++)
     {
         tot = tot + a[i];
     }
     printf("%d", tot);
     return 0;
}
