#include<stdio.h>
#include<string.h>
char hanzi[11][10]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
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
	char a[50]={"ʮ"};
	b=switch1(a);
	if(b==10)
	printf("true\n");
	else
	printf("false\n");
 } 
