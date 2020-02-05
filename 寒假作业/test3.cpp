#include<stdio.h>
#include<string.h>
char hanzi[11][10]={"零","一","二","三","四","五","六","七","八","九","十"};
int switch3(char shu[]) 
{
	int i,t=0,j;	char a[50];
	for(i=0;i<=10;i++)
    {
    	if(strncmp(hanzi[i],shu,2)==0)
    	{
    	t=t+i*10;   break;
        }
	}
	for(j=0;j<2;j++)
	{
	if(strlen(shu)>5) 	a[j]=shu[j+4];
	else 	a[j]=shu[j+2];
    }
    a[2]='\0';
	for(i=0;i<10;i++)
	{
		if(strcmp(a,hanzi[i])==0)
		t+=i;
	}
	return t;
}
int main()
{
	char a[50]={"三十五"};
	printf("%d\n",switch3(a));
} 
