
#include<iostream>
using namespace std;
int main(){
	int a,b,num1,num2,temp;
	cin>>a>>b;
	if(a<b){
		temp=a;
		a=b;
		b=temp;
	}
	num1=a;
	num2=b;
	temp=1;         
	while(temp!=0){
		temp=a%b;
		a=b;
		b=temp;
	}
	cout<<a<<endl;
	cout<<num1*num2/a<<endl;
	return 0;
}

7.
#include<iostream>
using namespace std;
void f(int n){
 	cout<<n%10;
 	int a=n/10;
 	if(a<=0){
 		return;
	}
	f(a);
}
int main(){
 	int n;
 	cin>>n;
 	f(n);
 	return 0;
}

#include<iostream>;
using namespace std;
void f(int n){
	int a;
	while(n!=0){
		a=n%10;
		cout<<a;
		n/=10;
	}
}
int main(){
	int n;
	cin>>n;
	f(n);
	return 0;
}