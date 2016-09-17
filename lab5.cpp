#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Student{
       int id;
       Name name;
       double grade[3];       
};

void newLine();

int main(){
    Student stud;
    double sum=0;
    cout << "Enter student records: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "First Name: ";
    cin.getline(stud.name.firstName, 29);
    cout << "Last Name: ";
    cin.getline(stud.name.lastName, 29);
    for(int i=0; i<3; i++){
            cout << "Grade "<< i << ": ";
            cin >> stud.grade[i];   
			sum+= stud.grade[i];     
    }
    
    cout << "\n\n";
    cout << "Display student records\n";
    cout << "ID: " << stud.id << endl;
    cout << "First Name: " << stud.name.firstName << endl;
    cout << "Last Name: " << stud.name.lastName << endl;
    cout << "Average: "<<sum/3<<endl;
    if(sum/3>75)
    	cout<<"Remarks: Pass";
    else
    	cout<<"Remarks: Failed";
			        
    
    
    system("pause > 0");
    return 0;   
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}





#include <iostream>
using namespace std;

struct Name{
       char lastName[30];
       char firstName[30];
};

struct Customer{
       int contactno;
       Name name;
       double grade[3];       
};
struct Date{
	int day;
	int mos;
	int year;
};
struct Items{
	char name[20];
	char id[20];
	double price;
	double quantity;
};

void newLine();

main(){
	Customer cust[5];
	Date date;
	Items items;
	cout<<"Enter Three Customers"<<endl;
	newLine();
	for( int i=0;i<3; i++){
		cout << "Customer Information "<<endl;
		cout << "First Name: ";
		cin.ignore();
		cin.getline(cust[i].name.firstName,29);
		cout << "Last Name: ";
		cin.getline(cust[i].name.lastName,29);
		cout << "Contact no.:";
		cin >> cust[i].contactno;
		cout << "Order Date:"<<endl;
		cout << "Day: ";
		cin  >> date.day;
		cout << "Month: ";
		cin  >> date.mos;
		cout << "Year: ";
		cin >> date.year;
		cout <<"Enter 3 items:"<<endl;
			for(int j=0; j<3;j++){
				cout<<"ID: ";
				cin >> items.id;
				cin.ignore();
				cout<<"Name: ";
				cin.getline(items.name,19);
				cout<<"Price: ";
				cin >> items.price;
				cout << "Quantity: ";
				cin >> items.quantity;
				cout << endl;
				cout << endl;
				cout << endl;
			}
		
		
	}
	cout <<"/n/n";
	cout <<"Summary Report"<<endl;
	cout <<"#          " << "Customer Name       "<< "Order Date       " << "Item  " << "Price    " << "Quantity";
	for( int i=0; i<3; i++){
	cout<< " ";
	cin >>cust[0].name.firstName;
}
}
void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}
