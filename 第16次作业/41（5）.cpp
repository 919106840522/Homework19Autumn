#include<iostream>
#include<string.h>
using namespace std;
int b[50];
void s(char*a,int n){
	int number=0;
 for(int i=0;i<strlen(a);i++)
  {
  	if(a[i]>='0'&&a[i]<='9')
   {
   	b[number]=b[number]*10+a[i]-48;
   		if(a[i+1]<'0'||a[i+1]>'9')
    	number++;
   }
  }
  number--;
  for(int j=0;j<=number;j++)
    {cout<<b[j]<<" ";
    cout<<endl;}
    cout<<"整数个数为："<<number+1;
 }
 int main(){
 	char a[30];
 	cin.get(a,30);
 	s(a,30);
 	return 0;
 }
