#include<stdio.h>
#include<string.h>
char space(char *s,int l)
{
    int i=0;
    for(i=0;i<l;i++)
    {
        if(s[i]==32)
        {
            s[i]='@';
        }
    }
    printf("%s",s);
}
int main()
{
    char s[]="my name is ch kiran kumar";
    int l=strlen(s);
    printf("the length of the string:%d\n",l);
    char (*fptr)(char *,int)=space;
    fptr(s,l);
}
