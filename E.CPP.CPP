#include<iostream>
#include<iomanip>
using namespace std;
struct employee{
	char name[30];
	char id[10];
	char des[20];
	char mb[15];
	float bs;
	float da;
	float hra;
	float ts;
};
int main()
{
	struct employee e[10];
	int i,n;
	cout<<" enter no of employees "<<endl;
	cin>>n;
	cout<<n<<endl;
	cout<<" enter details "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"emter name "<<endl;
		cin>>e[i].name;
		cout<<" enter employee id "<<endl;
	    cin>>e[i].id;
		cout<<" enter mobile no "<<endl;
		cin>>e[i].mb;
		cout<<" enter designation "<<endl;
		cin>>e[i].des;
		cout<<" enter basic salary "<<endl;
		cin>>e[i].bs;
		e[i].da=(80*e[i].bs)/100;
		e[i].hra=(20*e[i].bs)/100;
		e[i].ts=e[i].bs+e[i].da+e[i].hra;
		cout<<".................................."<<endl;
    }
		cout<<" employee details  "<<endl;
		cout<<"name\t id\tCnumber\tdesignation\tbasic salary\t"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<e[i].name<<setw(10); cout<<e[i].id<<setw(10); cout<<e[i].mb<<setw(10); cout<<e[i].des<<setw(10); 
			cout<<e[i].bs<<endl;
		}
		cout<<" salary details "<<endl;
		cout<<"name\t basic salary\t da\t hra\t ts\t"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<e[i].name<<setw(10); cout<<e[i].bs<<setw(10); cout<<e[i].da<<setw(10); cout<<e[i].hra<<setw(10);
			cout<<e[i].ts<<endl;
		}
	
	return 0;
}
