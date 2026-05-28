#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    printf("Enter any String:\n");
    scanf(" %[^\n]",str);
    int count=0;
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u'&&
        str[i]!='A'&& str[i]!='E'&& str[i]!='I'&& str[i]!='O'&& str[i]!='U')
        count++;
    }
    printf("%d",count);
    return 0;
}