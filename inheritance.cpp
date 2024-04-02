#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class person{
	private:
		
	string name;
	string cell_no;
	string city;
	public:
		
		void get_person(){
			cout<<"enter name of person\n";
			cin>>name;
			cout<<"enter cell no \n";
			cin>>cell_no;
			cout<<"enter city of person\n";
			cin>>city;
		}
		void display()
		{
			cout<<name<<"\t"<<cell_no<<"\t"<<city;
		}
};
class employee : public person
{
		string employee_id;
		string designation;
		string salary;
    public:
	void get_emp()
	{    
		cout<<"enter id of employee\n";
		cin>>employee_id;
		cout<<"enter designation \n";
		cin>>designation;
		cout<<"enter salary \n";
		cin>>salary;
		
	}
	void display_emp()
	{
	    display();
	    cout<<"\t"<<employee_id<<"\t"<<designation<<"\t"<<salary<<endl;			
	}
};
int main()
{
	employee e[2];
	for(int i=0;i<2;i++)
	{
		e[i].get_person();
		e[i].get_emp();
    }
    cout<<"name\t cell_no \t city \t emp_id \t des \t salary"<<endl;
    for(int i=0;i<2;i++)
    {
        e[i].display_emp();
	}
	return 0;
}
