1.
#include<iostream>
 #include<string.h>
 using namespace std;
  int main(void)
 {
 	int max,len,n=0;
 	cin>>max;
 	char (*ch)[20]=new char[max][20];
 	int *num=new int[max];
 	cin.get();
 	for(int x=0;x<max;x++)
 	{
 		cin.getline(ch[x],20);
 		len=strlen(ch[x]);
 		for(int i=0;i<len-1;i++)
 		{
 			for(int j=i+1;j<len;j++)
 			{
 				if(ch[x][i]>ch[x][j])
 					n++;	
 			}
 		}
 		num[x]=n;
 		n=0;
 	}
 	char tem1[20];
 	int tem2;
 	for(int i=0;i<max-1;i++)
 	{
 		for(int j=0;j<max-1-i;j++)
 		{
 			if(num[j]>num[j+1])
 			{
 				strcpy(tem1,ch[j]);
 				strcpy(ch[j],ch[j+1]);
 				strcpy(ch[j+1],tem1);
 				tem2=num[j];
 				num[j]=num[j+1];
 				num[j+1]=tem2;
 			}
 		}
 	}
 	for(int z=0;z<max;z++)
 	{
 		cout<<ch[z]<<"  "<<num[z]<<endl;
 	}
 	delete []ch;
 	delete []num;
 	return 0;
 }
2.
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
 		cout<<"|����2"<<x+1<<"??"<<endl;
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
