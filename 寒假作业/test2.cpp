#include<stdio.h>
#include<string.h>
char hanzi[11][10]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
void switch2(int shu1)
{
    int i;
    for(i=0;i<=10;i++)
    {
    	if(shu1==i)
    	printf("%s\n",hanzi[i]);
	}
}
int main()
{
	int a=10;
	switch2(a);
} 
