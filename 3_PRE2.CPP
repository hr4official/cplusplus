#include<iostream.h>
#include<conio.h>
class cricketer
{
	public:
	int age,tm,tw,tr;
	char name[20],cou[20],type[20];
void get()
{
	cout<<"\n enter the name of cricketer:";
	cin>>name;
	cout<<"\n enter the age:";
	cin>>age;
	cout<<"\n enter the country:";
	cin>>cou;
	cout<<"\n enter the type(batsman/bowler):";
	cin>>type;
	cout<<"\n enter the total mathes:";
	cin>>tm;
	cout<<"\n enter the total runs:";
	cin>>tr;
	cout<<"\n enter the total wickets:";
	cin>>tw;
	}
	void disp()
	{
		cout<<"\n \t"<<name<<"\t"<<age<<"\t"<<cou<<"\t\t"<<type<<"\t\t"<<tm<<"\t"<<tr<<"\t"<<tw;
		cout<<"\n--------------------------------------------------------------------------------";
	      /*cout<<"\n the name of cricketer is:"<<name;
		cout<<"\n the age of cricketer is:"<<age;
		cout<<"\n the country of cricketer is:"<<cou;
		cout<<"\n the type of cricketer is:"<<type;
		cout<<"\n the totalmathes of cricketer is:"<<tm;
		cout<<"\n the totalruns of cricketer is:"<<tr;
		cout<<"\n the totalwickets of cricketer is:"<<tw;   */
	}

};
	void main()
	{
		int i,n;
		clrscr();
		cricketer c[5];
		cout<<"\n enter the no of Cricketer:";
		cin>>n;
		for(i=0;i<n;i++)
		{
			c[i].get();
		}
		clrscr();
		cout<<"\n \t \t \t  Cricketer Information ";
		cout<<"\n--------------------------------------------------------------------------------";
		cout<<"\n \t Name \t Age \tCountry \tType \t   Matches \tRuns\tWickets ";
		for(i=0;i<n;i++)
		{
			c[i].disp();
		}
		getch();
	}
