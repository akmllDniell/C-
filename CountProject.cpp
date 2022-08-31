/*The purpose is for count how many symbol have been inserted by user. and the program 
  will end if the user insert @ symbol and also second program is for count the vowel and consonant
  in one word*/
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()

{
	char symbol,manual,usersymbol;
	int i,count, noprog, countvow, countcon;
	char continues='y';
	string word;
	
	
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
		
		cout<<"Did you want to set manually what symbol you want to count? y-yes & n-no "<<endl;
		cin>>manual;
		
		if(manual=='y')
	    {
	    	cout<<"Please enter what symbol you want to count:"<<endl;	
	    	cin>>usersymbol;
	    	
	    	if(usersymbol!='@')
	    	{
	    	system("cls");
	        cout<<"-------------------------------------------------------"<<endl;	
	        cout<<"!!!           You have inserted "<<usersymbol<<" symbol            !!!"<<endl;
	    	cout<<"!!!      This program will count the "<<usersymbol<<" symbol       !!!"<<endl;			    	
	    	cout<<"!!! to end this program you need to insert @ symbol !!!"<<endl;			    	
	    	cout<<"-------------------------------------------------------"<<endl;
	    	cout<<"Plesea Enter The symbol:";
	        cin>>symbol;
	        int symboltot=1;                      //total symbol is start with 1 because if user insert @ it will not count 
	        count=0;
	        while(symbol!='@')				      	    
	        {				          	
		        if(symbol==usersymbol)
		    {
			     count++;
		    }	
			symboltot++;	
	        cout<<"Plesea Enter The symbol:";
	        cin>>symbol;	        
	        }
	        cout<<"You have inserted "<<symboltot<<" symbol"<<endl;
	        cout<<"Number of "<<usersymbol<<" is :"<<count;
	    
	}
	else{
		system("cls");
		cout<<"You can't use the @ symbol!"<<endl;
	}
	    }
	    else
	    {
	    	system("cls");
	    	cout<<"-------------------------------------------------------"<<endl;	
	    	cout<<"!!!    This will automatically count the $ symbol   !!!"<<endl;			    	
	    	cout<<"!!! to end this program you need to insert @ symbol !!!"<<endl;			    	
	    	cout<<"-------------------------------------------------------"<<endl;	
		    cout<<"Plesea Enter The symbol:";
	        cin>>symbol;
	        count=0;
	        int symboltot=1;
	        while(symbol!='@')
	        {	        	
		        if(symbol=='$')
		    {
			     count++;
		    }
		    symboltot++;
	        cout<<"Plesea Enter The symbol:";
	        cin>>symbol;
	        }
	        cout<<"You have inserted "<<symboltot<<" symbol"<<endl;
	        cout<<"Number of $ is :"<<count;
        }
	}
    else if(noprog==2)
	{
		system("cls");	
		    cout<<"######################################################################"<<endl;	
	        cout<<"!!!                        Welcomeee                               !!!"<<endl;
	    	cout<<"!!!  This program will count how many vowel and consonant          !!!"<<endl;			    	
	    	cout<<"!!!       Please make sure you inserted - end of sentences         !!!"<<endl;			    	
	    	cout<<"!!! If you didn't not insert the symbol this program will be error !!!"<<endl;
	    	cout<<"######################################################################"<<endl;
	    	cout<<"\n"<<"\n"<<"Insert any word and end with '-' symbol :";
        //cin>>word;   
		getline(cin,word,'-');
    	int countvow=0;
		int countcon=0;
		if(word[word.size() - 1]!='-')
		{
			cout<<"i";
		}
    for(int i = 0; i < word.size(); ++i)
	{
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
		{
			countvow++;
		}
		else if((word[i]>='a'&& word[i]<='z') || (word[i]>='A'&& word[i]<='Z'))
		//else if(word[i]=='a'<='z'||word[i]=='A'>='Z')
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
