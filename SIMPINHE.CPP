#include<iostream.h>
#include<conio.h>
class emp
{
       public:
	     int no;
	     char name[20],des[20];
		  void get()
		  {
		   cout<<"\n Enter the Employee No:";
		   cin>>no;
		   cout<<"\n Enter the Employee Name:";
		   cin>>name;
		   cout<<"\n Enter the Designation:";
		   cin>>des;
		  }
};
class sal : public emp
{
	       float bs,hra,da,pf,ns;
	       public:
		  void get1()
		   {
		     cout<<"\nEnter the Basic Salary:";
		     cin>>bs;
		     cout<<"\n Enter the Human Resource:";
		     cin>>hra;
		     cout<<"\n Enter the Deaness Allowance:";
		     cin>>da;
		     cout<<"\n Enter the Profibality Fund:";
		     cin>>pf;
		   }
		   void cal()
		   {
		     ns=bs+hra+da-pf;
		   }
		   void disp()
		   {
		     cout<<no<<"\t"<<name<<"\t"<<des<<"\t"<<bs<<"\t\t"<<hra<<"\t"<<da<<"\t"<<pf<<"\t"<<ns<<"\n";
		   }

};
void main()
{
		    int i,n;
		    char ch;
		    sal s[10];
		    clrscr();
		    cout<<"\nEnter the Number Of Employee::";
		    cin>>n;
		     for(i=0;i<n;i++)
		      {
		      s[i].get();
		      s[i].get1();
		      s[i].cal();
		      }
		      cout<<"\n Eno \t Ename \t Des \t BASICSAL \t HRA  \t DA \t PF \t NS \n";
		      for(i=0;i<=n;i++)
		      {
		      s[i].disp();
		      }
getch();
}