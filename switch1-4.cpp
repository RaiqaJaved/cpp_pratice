# include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"please enter between 1to4"<<endl;
	cin>>n;
	
	switch(n)
	{
		case 1:
			cout<<"you pressed 1";
			break;
		case 2:
			cout<<"you pressed 2";
			break;
		case 3:
			cout<<"you pressed 3";
			break;
		case 4:
			cout<<"you pressed 4";
			break;	
		default:
		    cout<<"the number you entered is not between 1 to4";
	}
}
