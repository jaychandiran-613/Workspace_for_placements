#include<stdio.h>
int main()
{
    int size,count=0;
    printf("enter the size: ");
    scanf("%d",&size);
    int a[size];
    printf("enter the array: \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("the number of dulpicate elements: %d",count);

}
