（6）
#include<iostream>
#include<string.h>
using namespace std;
#define MAX 3
int getRev(char a[])
{
	int sum=0;
	int n=strlen(a);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])	sum++;
	}
	return sum;
} 
int main()
{
	char a[MAX][20];
	char t[20]; 
	int sum[MAX];
	int temp;
	for(int i=0;i<MAX;i++)
	{
		cin.getline(a[i],20);
		sum[i]=getRev(a[i]);
	}
	for(int i=0;i<MAX-1;i++)
	{		
		for(int j=0;j<MAX-i-1;j++)
		{
			if(sum[j]>sum[j+1])
			{
				temp=sum[j];
				sum[j]=sum[j+1];
				sum[j+1]=temp;
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
	 	        strcpy(a[j+1],t);
			}
		}
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<a[i]<<":"<<sum[i]<<endl; 
	}
}

（8）
#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{
	int sum=1;
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]==' '&&a[i+1]!=' '&&a[i+1]!=0)
		sum++;
	}
	if(a[0]==' ') sum--;
	cout<<sum;	
}
int main()
{
	char a[100]={'a'};
	cin.getline(a,100);
	getWordCount(a);
}