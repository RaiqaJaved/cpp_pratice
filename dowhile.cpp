# include<iostream>
using namespace std;
int main()
{
	int a=1;
	cout<<"value\tsquare\tcube"<<endl;
	do
	{
		cout<<a<<"\t"<<a*a<<"\t"<<a*a*a<<"\t"<<endl;
		a++;
	}
	while(a<=10);
	}
