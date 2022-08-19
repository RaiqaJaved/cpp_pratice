#include<iostream>
using namespace std;
int main()
{
	int max;
	int min;
	
	cout<<"please enter your choice"<<endl;
	cin>>max;
	
	cout<<"please enter your choice"<<endl;
	cin>>min;
	
	cout<<max+min;
	
	int choice;
    cout<<"please enter a num:<<add;<<sub"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Add";
			break;
		case 2:
			cout<<"subtract";
			break;
		default:
			cout<<"invalid";
	}
	
}
