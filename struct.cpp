//Rodriguez
#include<iostream>
#include<cstring>
using namespace std;
struct Name{
       char lastName[30];
       char firstName[30];
};

struct customer{
       int id,day,month,year,n1,q;
       Name name;
       double price[3];
        
            
};

void newLine();

int main()
{
    customer cts;
    int number,name;
    cout << "CUSTOMER INFORMATION\n";
    cout << "First Name: ";
    cin.getline(cts.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(cts.name.lastName, 29);
    cout<<"Contact Number:";
    cin>>number;
    cout<<"Order Date:";
    cout<<"\nDay:";
    cin>>cts.day;
    cout<<"Month:";
    cin>>cts.month;
    cout<<"Year:";
    cin>>cts.year;
    cout<<"Enter 3 Items";
    for(int i=0; i<3; i++)
    {
    	cout<<"\nID:"<<i+1<<endl;
    	cout<<"Name:";
    	cin>>cts.n1;
    	cout<<"Price:";
    	cin>>cts.price;
    	cout<<"Quantity:";
    	cin>>cts.q;
    	
	}
	
}

    
    
    

