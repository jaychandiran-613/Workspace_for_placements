#include<stdio.h>
int main()
{
    int a[20],n,d;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    for(int i=0;i<d;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[j]=a[j+1];
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
