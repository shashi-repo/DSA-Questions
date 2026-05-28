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
    int result=arr[0]-arr[n-1];
    printf("Result:%d",result);
    return 0;
}