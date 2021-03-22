#include<stdio.h>
int main()
{
    int a[10],n,i,newvalue1,newvalue2,newindex1,newindex2;
    printf("Enter Array size less than 10\n");
    scanf("%d",&n);
    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array Elements Are:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nEntert value that you want to insert");
    scanf("%d%d",&newvalue1,&newvalue2);
    printf("Enter index number where you want to insert value");
    scanf("%d%d",&newindex1,&newindex2);

for(i=n-2;i>=newindex1;i--)
a[i+2]=a[i];
a[newindex1]=newvalue1;
a[newindex2]=newvalue2;
printf("\nArray are:");
for(i=0;i<n+1;i++)
{
    printf("%d\t",a[i]);
}
    return 0;
}
