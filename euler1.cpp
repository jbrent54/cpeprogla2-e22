//this program is created by brent
#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;

int main(){
	ifstream f("input.txt");
	int num1;
	int sagot=0;
	f>>num1;	
	for (int i=0; i<num1; i++){
		if(i%3 == 0 || i%5 == 0) {
			sagot += i;
		}
	
	}
	cout <<sagot<< endl;
	system("pause>0");
	}	
