#include<stdio.h>
#include<string.h>
char hanzi[11][10]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
int switch1(char shu[]);
void switch2(int shu1);
int switch3(char shu[]);
int main()
{
	char p[100];
	printf("�����ļ�����\n") ;
	scanf("%s",p);
	freopen(p,"r",stdin) ;
    char a[50], b[50], c[50], d[50];
    int n,s,i,t;
    char e[50], f[50], g[50],h[50];
    scanf("%s %s %s %s", a, b, c, d);
    if (strcmp("����", a) == 0)
    {
        if (strcmp("����", c) == 0)
        {
            n = switch1(d);
    while(1)
    {
        scanf("%s",e);
        if(strcmp("����",e)==0)
        break;
        scanf("%s %s",f,g);
        if(strcmp("����", f) != 0&&strcmp("����",f) != 0)
        {
            printf("Error!");
            break;
        }
        if (strcmp("����", f) == 0&&strlen(g)<3)
        {
            n += switch1(g);
        }
        else if(strcmp("����", f) == 0&&strlen(g)>3)
        {
        	n += switch3(g);
		}
        if (strcmp("����",f) == 0&&strlen(g)<3)
        {
            n -= switch1(g);
        }
        else if(strcmp("����", f) == 0&&strlen(g)>3)
        {
        	n -= switch3(g);
		}
    }
    scanf("%s",h);
    if (strcmp("����", e) == 0)
    {
        if (n <= 10)
        {
            switch2(n);
        }
        else if (n > 10&&n<100)
        {
            if (n % 10 == 0)
            {
                s = n / 10;
                switch2(s);
                printf("ʮ");
            }
            else
            {
                s = n / 10;
                i = n % 10;
                switch2(s);
                printf("ʮ");
                switch2(i);
            }
        }
        else if(n>=100)
        {
        	if(n%100==0)
        	{
        		s = n / 100;
                switch2(s);
                printf("��");
			}
			else if(n%100!=0&&n%10==0)
			{
				s=n/100;
				switch2(s);
				printf("��");
				i=n/10%10;
				switch2(i);
				printf("ʮ");
			}
			else
			{
				s=n/100;
				switch2(s);
				printf("��");
				i=n/10%10;
				switch2(i);
				printf("ʮ");
				t=n%100;
				switch2(t);
			}
		}
    }
    } 
    else
    printf("Error!");
    } 
    else
    printf("Error!");
    return 0;
}
int switch1(char shu[])
{
    int i;
    for(i=0;i<=10;i++)
    {
    	if(strcmp(hanzi[i],shu)==0)
    	return i;
	}
}
void switch2(int shu1)
{
    int i;
    for(i=0;i<=10;i++)
    {
    	if(shu1==i)
    	printf("%s",hanzi[i]);
	}
}
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
