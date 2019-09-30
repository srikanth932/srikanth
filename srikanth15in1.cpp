#include<iostream>
using namespace std;
class General
{
	public:
	int seatavailability,fare;
		void getgdetails()
		{
			cout<<"enter the general details:";
			cin>>seatavailability;
		}
		void displaygdetails()
		{
			cout<<"gerneral seatavailability:"<<seatavailability<<endl;
			fare+=20;
			cout<<"general fare:"<<fare<<endl;
		}
	
};
class firstclass
{
	public:
	int seatavailability,fare;
		void getsdetails()
		{
			cout<<"enter the firstclass details:";
			cin>>seatavailability;
		}
		void displaysdetails()
		{
			cout<<"firstclass seatavailability:"<<seatavailability<<endl;
			fare+=50;
			cout<<"firstclass fare:"<<fare<<endl;
		}
	
};
class Ac
{
	public:
	int seatavailability,fare;
		void getadetails()
		{
			cout<<"enter the ac details:";
			cin>>seatavailability;
		}
		void displayadetails()
		{
			cout<<"Ac seatavailability:"<<seatavailability<<endl;
			fare+=100;
			cout<<"Ac fare:"<<fare<<endl;
		}
	
};
class Trainticket:public General,public firstclass,public Ac
{
	int trainno;
	char name[20];
	public:
		int age;
		int fare;
		void gettdetails()
		{
			cout<<"enter the train no and name and age:";
			cin>>trainno>>name>>age>>fare;
		}
		void displaytdetails()
		{
			cout<<"train no:"<<trainno<<endl;
			cout<<"train name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"minimum fare:"<<fare<<endl;
			if(age<60)
			{
				fare=fare;
				cout<<"fare no conssesion:"<<fare<<endl;
			}
			else
			{
				fare-=(fare/100)*50;
				cout<<"fare conssesion:"<<fare<<endl;
			}
		}
		
};
int main()
{
	Trainticket t;
	t.gettdetails();
	t.getgdetails();
	t.getsdetails();
	t.getadetails();
	t.displaytdetails();
	t.displaygdetails();
	t.displaysdetails();
	t.displayadetails();
	return 0;
}



