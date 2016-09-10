//this program is created by brent

#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
#include <cstring>
#include <cstdlib>
#include <conio.h>
using namespace std;

int factorial(int x){
    int i;
    long y = 1;
     for (int i = 1; i <= x; i++)
     {
         y = y * i;
     }
 
  return y;
}

double getRound(double num){
	return round(num);
}

void problem1(){
	//this program is used to round off value.
	double num, result;
	cout << "Round off Program"<<endl;
	cout << "Enter a number to be round off: ";
		cin >> num;
	result = getRound(num);
		cout << "Round off value: " << result <<endl;
	

	}


void problem2(){
	//this program is used to generate 10 random number
	int min=1 , max =20;
		cout << "Random numbers Program" <<endl;
		cout << "Your 10 random numbers are: ";
	srand((unsigned)time( NULL ));
	for (int i=0; i<10; i++)
		cout << min +(rand()%(max - min + 1)) << " ";
		cout << endl;
	}

void problem3(){
     //this program is used to compute for diff. kinds of shapes
    char a;
    int num1, num2;
    int p = 3.1416;
     
    cout << "********************" << endl;
    cout << "MENU" << endl;
    cout << "********************" << endl;
    cout << "[1] - Area of square" << endl;
    cout << "[2] - Area of rectangle" << endl;
    cout << "[3] - Area of triangle" << endl;
    cout << "[4] - Area of circle" << endl;
    cout << "[5] - exit" << endl;
    cout << "--------------------" << endl;
    cout << "Enter your choice: ";
        cin >> a;
    cout << "--------------------" << endl;
     
    switch(a)
    {
        case 1:
            case '1':
            {
                cout << "--------------------" << endl;
                cout << "AREA OF SQUARE" << endl;
                cout << "--------------------" << endl;
                cout << "Enter side of the Square: ";
                    cin >> num1;
                cout << "The area is "<< num1*num1 << " sq. units." << endl;
                break;
                  
            }
        case 2:
            case '2':
            {
                cout << "--------------------" << endl;
                cout << "AREA OF RECTANGLE" << endl;
                cout << "--------------------" << endl;
                cout << "Enter the length: ";
                    cin >> num1;
                cout << "Enter the width: ";
                    cin >> num2;
                cout << "The area is " << num1*num2 << " sq. units." << endl;
                break;
            }
        case 3:
            case '3':
            {
                cout << "--------------------" << endl;
                cout << "AREA OF TRIANGLE" << endl;
                cout << "--------------------" << endl;
                cout << "Enter the base: ";
                    cin >> num1;
                cout << "Enter the width of the height: ";
                    cin >> num2;
                cout << "The area is " << num1*num2/2 << " sq. units." << endl;
                break; 
            }
        case 4:
            case '4':
            {
                cout << "--------------------" << endl;
                cout << "AREA OF CIRCLE" << endl;
                cout << "--------------------" << endl;
                cout << "Enter the Radius: ";
                    cin >> num1;
                cout << "The area is " << p* ( num1*num1 ) << " sq. units.";
                break;
            }
        case 5:
            case '5':
            {
                cout << "Thank you!" <<endl;
                break;
            }
        default:
            {
                cout << "INVALID SELECTION";
                break;
            }
    }
}

void problemb(){
     //this program is used to solve for the factorial
     int i, x;
     cout << "Factorial Program" << endl;
     cout << "Enter the Number :";
        cin >> x;
     cout << "The Factorial of " << x << " is " <<factorial(x);
     getch();
     cout << endl;
     
 }

main(){
	int a, b;
		problem1();
			cout << endl;
		problem2();
			cout << endl;
		problem3();
			cout << endl;
		problemb();
			cout << endl;
		//this program is used to determine highest from 2 numbers
		cout << "min-max program" <<endl;	
		cout << "Enter 1st number:";
			cin >> a;
		cout << "Enter 2nd number:";
			cin >> b;
		
		if(a==b)
	 		cout <<"both numbers are equal";
		else 
			cout << "highest number:" << max(a,b);		
		
}
