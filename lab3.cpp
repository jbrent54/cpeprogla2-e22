//This program is a compilation of Lab 3
#include <iostream>
#include <string>
#include <conio.h>
#include <cstring>
#include <string.h>

using namespace std;

char mystrCpy(char word1[100], char word2[100]);
char mystrCat(char cat1[100], char cat2[100]);
char mystrSplit(char split[100]);
char sentence(char sentence[100]);

void problem1(){
	//this program is used to compare strings
	char Cmp1[100];
	char Cmp2[100];
	int result;
	cout << "STRING COMPARE" << endl;
	cout << "Enter a first word (str1): ";
	cin >> Cmp1;
	cout << "Enter a second word (str2): ";
	cin >> Cmp2;	
	result = strcmp (Cmp1,Cmp2);	
	switch(result){
		case -1:
			cout << "negative ";
			break;
		case 0:
			cout << "equal ";
			break;
		case 1:
			cout << "positive";
			break;
	}
}

char mystrCpy(char x[100], char y[100]){
     cout << "new string value for str1: " << strcpy(x,y) << endl;
     }
void problem2(){
	
	//this program is used to copy strings
	char str1[100];
	char str2[100];
	char mystrCpy(char word1[100], char word2[100]); 
    cout << "STRING COPY" << endl;
    cout << "Enter a first word (str1): ";
    cin.getline(str1,99); 
    cin.ignore();
    cout << "Enter a second word (str2): ";
    cin.getline(str2,99);
    cin.ignore();
  	mystrCpy(str1,str2);
}


char mystrCat(char x[100], char y[100]){
     cout << "New string value for str1:" << strcat(x,y) << endl;
     }

void problem3(){
	//this program is used for string concatenate
	char cat1[100], cat2[100];
	
    cout <<"**********************"<< endl << "STRING CONCATENATION " << endl << "**********************"<< endl;
	cout << "Enter a first word(str1):";
    cin.getline(cat1,100);
    cout << "Enter a second word(str2):";
    cin.getline(cat2,100);
	mystrCat(cat1,cat2);
    
    
}


void problem4()
{
	//this program is used for string palindrome
	string str1;
	cout << "PALINDROME" <<endl;
	cout << "Enter a word: ";
	cin >> str1;
	if(str1==string(str1.rbegin(), str1.rend())){
		cout << str1 << " is a palidrome"  << endl;
	}
	else{
		cout << str1 << " is not a palidrome"  << endl;
	}
}

void problem5()
{
	//this program is used to manipulate string
    char sentence[100];
   	char man = true;
	cout << "Enter Some String:";
    cin.getline(sentence,99);
    cin.ignore();
    for (int b = 0; b < strlen(sentence); b++)
    {
        if (isalpha(sentence[b]) && man == true)
        {
            sentence[b] = toupper(sentence[b]);
            man = false;
        }
        else
            if (isspace (sentence[b]))
                man = true;
    }

	cout << sentence << endl;

}


char mystrSplit(char split[100]){
	int i,tmp;
	for(i=0; split[i]!='\0'; i++);
	for(i--; i>=0;i--){
		if(split[i-1]==' ' || i==0){
			for(tmp=i; split[tmp]!='\0' && split[tmp]!=' '; tmp++)
      			cout<<split[tmp];
      			cout<< endl;
		}
 	}		
 	cout << endl;
 }

main(){
	problem1();
	cout << endl;
	cout << endl;
	problem2();
	cout << endl;
	cout << endl;
	problem3();
	cout << endl;
	cout << endl;
	problem4();
	cout << endl;
	cout << endl;
	problem5();
	cout << endl;
	cout << endl;
	
	//this program is used to split strings
	char split[100];
	cout << "Enter a string: ";
	gets(split);
	mystrSplit(split);
	
	system("pause>0");
}


