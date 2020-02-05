#include<stdio.h>
#include<string.h>
char hanzi[11][10]={"零","一","二","三","四","五","六","七","八","九","十"};
int switch1(char shu[])
{
    int i;
    for(i=0;i<=10;i++)
    {
    	if(strcmp(hanzi[i],shu)==0)
    	return i;
	}
}
int main()
{
	int i,b;
	char a[50]={"十"};
	b=switch1(a);
	if(b==10)
	printf("true\n");
	else
	printf("false\n");
 } 
