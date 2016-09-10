#include<iostream>
#include<cstring>
#include<string>
using namespace std;

 int myStrCmp( char* str1, char* str2){
  //return strlen(str);
  switch(strcmp(str1, str2));{
  	case 0:
  		cout<<"negative";
  		break;
  	case 1:
  		cout<<"equal";
  		break;
  	case 2:
  		cout<<"positive";
  		break;
  }
}

int main(){
  char str1[100]="hello";
  char str2[100]="Hello";
  myStrCmp (str, hello there);
  cout << myStrCmp(str1, str2);
}
