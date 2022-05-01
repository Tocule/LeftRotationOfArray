#include <stdio.h>

int main()
{
    int a[20];
    int n,i,d,x,j;
    printf("Enter the number of elements you want\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to shift by\n");
    scanf("%d",&d);
    for(i=0;i<d;i++)
    {
        x=a[0];
        for(j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[j-1]=x;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
