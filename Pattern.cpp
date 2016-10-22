//this program is created by brent

#include<iostream>
#include<fstream>
using namespace std;

int main(){
	
	ifstream f("input.txt");
	int num1, num2;
	int arr[]={1,2,4,3};
	int x=0;
	f>>num1>>num2;
	cout<<num1<<" ";
	num1+=arr[(x%4)];
	for(num1; num1<=num2; num1+=arr[(x%4)]){
		cout <<num1<<" ";  
		x++;
	}
	system("pause");
}
