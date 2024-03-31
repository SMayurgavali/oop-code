#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class student{
	public:
		char name[20];
		char prn[20];
		float grade;
		void get_data();
		void put_data();
		
};
void student :: get_data()
{
	 cout<<"\nEnter Name : ";
     cin>>name;
     cout<<"\nEnter PRN: ";
     cin>>prn;
     cout<<"\nEnter Grade : ";
     cin>>grade;
}
void student :: put_data()
{
     cout<<setw(8)<<name<<setw(15)<<prn<<setw(15)<<grade<<endl;
}
int main()
{
	student s[10];
    int n,i;
    cout<<"\nenter the number of students:";
    cin>>n;
    cout<<"enter details for student :"<<endl;
    for(i=0;i<n;i++)
    {
       s[i].get_data();
    }
    cout<<"\nstudent data"<<endl;
    cout<<setw(5)<<"NAME"<<setw(10)<<"PRN"<<setw(15)<<"GRADE"<<endl;
    for(i=0;i<n;i++)
    {
       s[i].put_data();
    }
}
