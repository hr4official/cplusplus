#include<iostream.h>
#include<conio.h>
#include<string.h>
class fact
{
	public:
	int n,i,f;
		fact()
		{
			cout<<"\n Enter the No :";
			cin>>n;
		}
		void for1()
		{
			f=1;
			for(i=1;i<=n;i++)
			{
				f=f*i;
			}
			cout<<"\n Factorial of "<<n<<" using for loop is : "<<f;
		}
		void while1()
		{
			i=1;
			while(i<=n)
			{
				f=f*1;
				i++;
			}
			cout<<"\n Factorial of "<<n<<" using while loop is : "<<f;
		}
		void dowhile()
		{
			i=1;
			do
			{
				f=f*1;
				i++;
			}while(i<=n);
			cout<<"\n Factorial of "<<n<<" using do while] loop is : "<<f;
		}
};
void main()
{
	int ch;
	clrscr();
		fact f1;
		cout<<"\n \t \t Menu";
		cout<<"\n 1.fact using For";
		cout<<"\n 2.fact using while";
		cout<<"\n 3.fact using do while";
		cout<<"\n 4.Exit";
		do
		{
			cout<<"\n Enter your choice ";
			cin>>ch;
			switch(ch)
			{
				case 1: f1.for1();
					break;
				case 2: f1.while1();
					break;
				case 3: f1.dowhile();
					break;
				default:
					break;
			}
		}while(ch!=4);
	getch();
}