/*The purpose is for count how many $ symbol have been inserted by user. and the program 
  will end if the user insert @ symbol and also second program is for count the vowel and consonant
  in one word*/
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()

{
	char symbol;
	int i,count, noprog, countvow, countcon;
	char word[100],continues='y';
	
	
	while(continues=='y')
	{
	system("cls");
	cout<<"HEYYY WELCOME TO MY PROGRAM! "<<endl;
	cout<<"Please select the program you want to continue "<<endl;
	cout<<"1. Count Symbol "<<endl;
	cout<<"2. Count vowel and consonant "<<endl;
	cin>>noprog;
	
	if(noprog==1)
	{
	cout<<"Plesea Enter The symbol:";
	cin>>symbol;
	count=0;
	while(symbol!='@')
	{
		if(symbol=='$')
		{
			count++;
		}
	cout<<"Plesea Enter The symbol:";
	cin>>symbol;
	}
	cout<<"Number of $ is :"<<count;
    }

    
    else if(noprog==2)
	{
	cout<<"Plesea Enter The any word without any space: "<<endl;
    cin>>word;
    	char ch=word[i];
    	countvow=0;
		countcon=0;
    for(int i = 0; i < word[i]; ++i)
	{
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
		{
			countvow++;
		}
		else
		{
			countcon++;
		}
	
    }
    cout<<"Number of vowels:"<<countvow<<endl;//display number of vowels
    cout<<"Number of consonants:"<<countcon<<endl;//display number of consonant
    
    }
    else
    {
    	cout<<"Only enter number 1 for count the symbol and 2 for count the vowel and consonant";
    }
    
    cout<<"\nRepeat the program? y-yes n-no: ";
    cin>>continues;
}
	return 0;
}
