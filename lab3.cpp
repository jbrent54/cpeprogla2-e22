#include<iostream>
#include<cstring>
#include<string>
using namespace std;

 char* myStrCmp( char* str1, char* str2){
  switch(strcmp(str1, str2)){
  	case -1:
  		cout<<"negative"<<endl;
  		break;
  	case 0:
  		cout<<"equal"<<endl;
  		break;
  	case 1:
  		cout<<"positive"<<endl;
  		break;
  }
}

void myStrCpy(char* str1,char*str2){
	strcpy(str1,str2);
}

void myStrCat(char* str1,char*str2){
	strcpy(str1,str2);
}

void palindrome(){
	char wordenter[30];
	int length;	
	cout<<"**********************"<<endl <<"PALINDROME"<<endl<<"**********************"<<endl;
	cout<<"Enter a word: ";
	cin>>wordenter;

	length = strlen(wordenter);

	int i, j, palindrome;
	for (i=0, j=length-1, palindrome=1; j>i; j--, i++){
		if(toupper(wordenter[i]) != toupper(wordenter[j])){
			palindrome = 0;
			break;
		}
	}
	cout<<"Word "<<wordenter<<(palindrome?" is":" is not")<<" a palindrome."<<endl;
}
int main(){
  char str1[100]="Hello";
  char str2[100]="hello";
  
  myStrCmp (str1, str2);
  myStrCpy (str1, str2);
  myStrCat (str1,str2);
  cout<< str1 <<endl;
  cout<<endl;
  palindrome();
  cout<<endl;
}
