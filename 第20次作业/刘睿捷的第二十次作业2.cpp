#include<iostream>
#include<string.h>
using namespace std;

struct ch
{
	int len=0;
	char *p=NULL;
};

int main(void)
{
	int n;
	cin>>n;
	cin.get();
	ch *chs=new ch[n];
	for(int x=0;x<n;x++)
	{
		cout<<"��"<<x+1<<"��"<<endl;
		cin>>chs[x].len;
		cin.get();
		chs[x].p=new char[chs[x].len+1];
		for(int y=0;y<chs[x].len;y++)
		{
			char a;
			cin>>a;
			*(chs[x].p+y)=a;
		}
		*(chs[x].p+chs[x].len)=0;
	}
	ch temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(strcmp(chs[j].p,chs[j+1].p)>0)
			{
				temp=chs[j];
				chs[j]=chs[j+1];
				chs[j+1]=temp;
			}
		}
	}
	cout<<endl<<"sort:"<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<chs[i].p<<endl;
	}
	return 0;
}
