#include<iostream>
using namespace std;

/*
 *黄海浪 9181040G0818
 *2019.10.17
 *第 5 次作业
 */

int main() {
	{
		//T2
		long long i;
		int bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
		cin>>i;
		bonus1=100000*0.1;
		bonus2=bonus1+100000*0.75;
		bonus4=bonus2+200000*0.5;
		bonus6=bonus4+200000*0.3;
		bonus10=bonus6+400000*0.15;
		if(i<=100000)
			bonus=i*0.1;
		else if(i<=200000)
			bonus=bonus1+(i-100000)*0.075;
		else if(i<=400000)
			bonus=bonus2+(i-200000)*0.05;
		else if(i<=600000)
			bonus=bonus4+(i-400000)*0.03;
		else if(i<=1000000)
			bonus=bonus6+(i-600000)*0.015;
		else
			bonus=bonus10+(i-1000000)*0.01;
		cout<<"bonus="<<bonus;
		cin.get();
	}
	{
		//T4
		int day,month,year,sum,leap;
		cout<<"\nplease input year month day\n";
		cin>>year>>month>>day;
		switch(month) {
			case 1:
				sum=0;
				break;
			case 2:
				sum=31;
				break;
			case 3:
				sum=59;
				break;
			case 4:
				sum=90;
				break;
			case 5:
				sum=120;
				break;
			case 6:
				sum=151;
				break;
			case 7:
				sum=181;
				break;
			case 8:
				sum=212;
				break;
			case 9:
				sum=243;
				break;
			case 10:
				sum=273;
				break;
			case 11:
				sum=304;
				break;
			case 12:
				sum=334;
				break;
			default:
				cout<<"data error";
				return 0;
		}
		sum=sum+day;
		if(year%400==0||(year%4==0&&year%100!=0))
			leap=1;
		else
			leap=0;
		if(leap==1&&month>2)
			sum++;
		cout<<"It is the "<<sum<<"th day."<<endl;
		cin.get();
	}
	{
		//T6
		cout<<"Hello C-world!"<<endl;
		cout<<" ****"<<endl;
		cout<<" *"<<endl;
		cout<<" * "<<endl;
		cout<<" ****"<<endl;
		cin.get();
	}

	{
		//T8
		int i,j,result;
		cout<<endl;
		for (i=1; i<10; i++) {
			for(j=1; j<=i; j++) {
				result=i*j;
				cout<<j<<"*"<<i<<"=";
				cout.setf(std::ios::left);
				cout.width(3);
				cout<<result;
			}
			cout<<endl;
		}
		cin.get();
	}

	{
		//T10
		int i,j;
		cout<<"\1\1"<<endl;
		for(i=1; i<11; i++) {
			for(j=1; j<=i; j++)
				cout<< "■■";
			cout<<endl;
		}
		cin.get();
	}

	return 0 ;
}
