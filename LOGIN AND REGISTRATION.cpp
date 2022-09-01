#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
void login();
void registration();
void forgot();

int main()
{
	int c;
	cout<<"\t\t\t_____________________________________________________\n\n\n";
	cout<<"\t\t\t                     welcome to the Login Page       \n\n\n";
	cout<<"\t\t\t___________________       Menu      __________________\n\n\n";
	cout<<"                                                            \n\n\n";
	cout<<"\t|press 1 to LOGIN                     |"<<endl;
	cout<<"\t|press 2 to REGISTER                  |"<<endl;
	cout<<"\t|press 3 if you FORGOT PASSWORD       |"<<endl;
	cout<<"\t|press 4 to EXIT                      |"<<endl;
	
	cout<<"\n\t\t\t please enter your choice :";
	cin>>c;
	cout<<endl;
	
	switch(c)
	{
		case 1:
			login();
			break;
			
		case 2:
		    registration();
			break;
			
		case 3:
		    forgot();
			break;
			
		case 4:
		    cout<<"\t\t\t Thankyou! \n\n";
			break;
			
		default:
		   cout<<"\t\t\t please select from the given options \n"<<endl;
		   main();
   }
}
void login()
{
	int count;
	string useId,password,id,pass;
	cout<<"\t\t\t please enter the username and password :"<<endl;
	cout<<"\t\t\t USERNAME";
	cin>>userId;
	cout<<"\t\t\t PASSWORD";
	cin>>password;
	
	ifstream input("records.txt");
	
	while(input>>id>>pass)
	{
		if(id==userId &&pass==password)
		{
			count=1;
		}		
	}
	input.close();
	if(count==1)
	{
	  cout<<userId"\n your LOGIN is successfull \n Thanks for loggin !\n";
	  main();	
	}
	else{
		cout<<"\n LOGIN ERROR \n please check your usensme and password \n" ;
		main();
	}		
}
 void registration();
{
	string ruserId,rpassword,rid,rpass;
	cout<<"\t\t\t please enter username:";
	cin>>ruserId;
	cout<<"\t\t\t please enter password:";
	cin>>rpassword;
	
	ofstream f1("records.txt",ios::app);
	f1<<userId<<'  '<<rpassword<<endl;
	cout<<"\n\t\t\t Registartion is successfull! \n";
	main();	
}	
void forgot()
{
	int option;
	cout<<"\t\t\t you forgot the password? No worries \n";
	cout<<"press 1 to search your id by user name"<<endl;
	cout<<"\t\t\t Enter your choice :";
	cin>>opotion;
	switch(option)
	{
		case 1:
			int count=0;
			string suserId,sId,spass;
			cout<<"\n\t\t\t Enter the usename which you remembered:";
			cin>>suserId;
			
		ifstream f2("records.txt");
		while(f2>>sid>>spassword)
		{
			if(sid==userId)
			{
				count=1;		
			}
		}
		f2.close();
		if(cpunt==1)
		{
			cout<<"\n\n your account is found! \n";
			cout<<"\n\n your password is :"<<space;
			main();
		}	
		else{
			cout<<"\n\t sorry! your account is not found"<<endl;
			main();
		}
		break;			
	}
	    case 2:
		{
			main();
		}
		default:
			cout<<"\t\t\t wrong choice ! please try again"<<endl;
	}
}
	

