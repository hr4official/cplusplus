#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class student
{
	public:
	int rno,m[10],i,c,code,tot,mp,ma,mf,fp,ff,fa;
	char name[20],cla[20],gender[10];
	float per;
	student()
	{
		c=0;
		code=0;
		tot=0;
		mp=0;
		ma=0;
		mf=0;
		fp=0;
		ff=0;
		fa=0;
	}
	void get();
	void calc();
	void result();
};
	void student :: get()
	{
		cout<<"\n enter the rollno:";
		cin>>rno;
		cout<<"\n enter the name:";
		cin>>name;
		for(i=0;i<5;i++)
		{
		cout<<"\n enter the marks:"<<i+1<<"=";
		cin>>m[i];
			if(m[i]>100)
			{
				do
				{
					cout<<"\n invalid marks:";
					cout<<"\n enter the marks:"<<i+1<<"=";
					cin>>m[i];
				}while(m[i]>100);
			}
		}

		cout<<"\n enter the gender code(1.male & 2.female)";
		cin>>code;
	}
	void student :: calc()
	{
		for(i=0;i<5;i++)
		{
			tot=tot+m[i];
		}
		per=tot/5;
		for(i=0;i<5;i++)
		{
			if(m[i]<35)
			{
			c=c+1;
			}
		}
		if(c==1 || c==2)
		{
			strcpy(cla,"ATKT");
			if(code==1)
			ma=ma+1;
			else
			fa=fa+1;
		}
		if(c>2)
		{
			strcpy(cla,"FAIL");
			if(code==1)
			mf=mf+1;
			else
			ff=ff+1;
		}
		if(c==0)
		{
			strcpy(cla,"PASS");
			if(code==1)
			mp=mp+1;
			else
			fp=fp+1;

			if(per<35)
			strcpy(cla,"pass");
			else if(per>=35 && per<60)
			strcpy(cla,"second");
			else if(per>=60 && per<70)
			strcpy(cla,"first");
			else if(per>=70)
			strcpy(cla,"Distiction");
		}
	}

		 void student :: result()
		 {

			cout<<"--------------------------------------------------------------------------------"<<endl;
			cout<<setw(7)<<rno<<setw(7)<<name<<setw(7)<<m[0]<<setw(7)<<m[1]<<setw(7)<<m[2]<<setw(7)<<m[3]<<setw(7)<<m[4]<<setw(7)<<setw(7)<<tot<<setw(7)<<per<<setw(7)<<cla<<endl;

		}
	void main()
	{
	int i,n,mp1,ma1,mf1,fp1,ff1,fa1;
		clrscr();
		mp1=0;
		ma1=0;
		mf1=0;
		fp1=0;
		ff1=0;
		fa1=0;
		student s[10];
		cout<<"\n enter how many student:";
		cin>>n;
		for(i=1;i<=n;i++)
		{
		s[i].get();
		s[i].calc();
		}
		clrscr();
		cout<<setw(50)<<"student marksheet:"<<endl;
		cout<<setw(50)<<"##################"<<endl;
		cout<<setw(10)<<"Number"<<setw(7)<<"Name"<<setw(7)<<"sub1"<<setw(7)<<"sub2"<<setw(7)<<"sub3"<<setw(7)<<"sub4"<<setw(7)<<"sub5"<<setw(7)<<"total"<<setw(7)<<"per"<<setw(7)<<"result"<<endl;
		for(i=1;i<=n;i++)
		{
		s[i].result();
		}
		for(i=1;i<=n;i++)
		{
		mp1=mp1+s[i].mp;
		mf1=mf1+s[i].mf;
		ma1=ma1+s[i].ma;
		fp1=fp1+s[i].fp;
		ff1=ff1+s[i].ff;
		fa1=fa1+s[i].fa;
		}
		cout<<"====================================================================================="<<endl;
		cout<<setw(10)<<"sr.no"<<setw(5)<<"result"<<setw(5)<<"male"<<setw(5)<<"female"<<setw(5)<<"total"<<endl;
		cout<<setw(10)<<1<<setw(5)<<"pass"<<setw(5)<<mp1<<setw(5)<<fp1<<setw(5)<<mp1+fp1<<endl;
		cout<<setw(10)<<2<<setw(5)<<"fail"<<setw(5)<<mf1<<setw(5)<<ff1<<setw(5)<<mf1+ff1<<endl;
		cout<<setw(10)<<3<<setw(5)<<"atkt"<<setw(5)<<ma1<<setw(5)<<fa1<<setw(5)<<ma1+fa1<<endl;
		getch();

	}