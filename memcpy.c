memcpy:

#include<stdio.h>
#include<string.h>
char memcpyfun(char *dest,char *src,int n)
{
    char *s=src;
    char *d=dest;
    for(int i=0;i<n;i++)
    {
        d[i]=s[i];
    }
    printf("%s",d);
}
int main()
{
    char s[]="kirankumar";
    char d[20];
    int n=strlen(s)+1;
    memcpyfun(d,s,n);
}


another method:
#include<stdio.h>
#include<string.h>
char memcpyfun(void *dest,void *src,int n)
{
    char *s=(char*)src;
    char *d=(char*)dest;
    for(int i=0;i<n;i++)
    {
        d[i]=s[i];
    }
    printf("the mem cpy src to dest:%s",d);
}
int main()
{
    char s[]="kirankumar";
    char d[20];
    int n=strlen(s)+1;
    memcpyfun(d,s,n);
}


memcpy():1)the memcpy fun is coping one block of memory to another block of memory to source to destnation.
	 2)and it is copying one by one character in the memory.
	 3)and it does not check the overflow condition.	
