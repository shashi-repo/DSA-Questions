#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
int max=arr[0];
int pos=0;
for(int i=1;i<n;i++)
{
    if(arr[i]>max)
    {
    max=arr[i];
    pos=i;
}
}
for(int i=pos;i<n-1;i++)
{
arr[i]=arr[i+1];
}
n--;
printf("Deleted element is:%d\n",max);
printf("Elements After deletion:");
for(int i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}