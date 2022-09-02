#include<iostream>
#include<windows.h>
#include<fstream>
#include<string>
#include <iomanip>
#include <ios>
using namespace std;

//all the function
void wrongpass();
void wrongun();
void accnotexist();
void logsuccess();
void loadingscreen();
	
int main()
{
	fstream accountfile;                            //this fstream variable name accountfile
	string line,pw,un,pass,username,pwfile,unfile;
	int  choose, choice;
	
	cout<<"welcome to Login System!!!"<<endl;      //welcoming to user
	cout<<"[1]. SIGN UP "<<endl;
	cout<<"[2]. LOG IN  "<<endl;
	cin>>choose;
	
	if(choose==1)                                //user will go to sign up page to create their own account
	{
		cout<<"enter your username :"<<endl;    //user need to enter their username
		cin>>username;
		cout<<"Create your password"<<endl;     //user need to enter their password
		cin>>pass;
		accountfile.open("account.txt",ios::in);     //here is where to check either the account have already create or not 
		getline(accountfile,unfile);                 // use ios::in to read the file and get the firstline which is username
		getline(accountfile,pwfile);                  // use in to read the file and get the firstline which is pssword
		accountfile.close();
		if(username==unfile&&pass==pwfile)           //if the account exist it will display the error
		{
			cout<<"account alredy exist"<<endl;
			cout<<"PLEASE LOGIN IN MAIN PAGE!!"<<endl;
			cout<<"PLEASE WAIT, YOU WILL BE AUTOMATICALLY REDIRECT TO THE MAIN PAGE, PLEASE LOG IN YOUR USERNAME AND PASS"<<endl;
			Sleep(5000);
		}
		else
		{
		accountfile.open("account.txt",ios::out);  //else if the account doesn't exist so user can created their account
		accountfile<<username<<endl;               //use ios::out mean to write the file, use endl to separate the line username and pass
		accountfile<<pass<<endl;
		if(accountfile.is_open())                  //here to check either the file is open or not, if not open mean fail to write new account
		{
			cout<<"YOU'RE REGISTER SUCCESFULLY!!"<<endl;
			cout<<"PLEASE WAIT, YOU WILL BE AUTOMATICALLY REDIRECT TO THE MAIN PAGE"<<endl;
			Sleep(5000);                        //use the sleep to make a system a little bit delay and it will automatically return to main page
		}
		else
		{
		
			cout<<"YOU'RE REGISTER FAILED!!";
			cout<<"PLEASE WAIT, YOU WILL BE AUTOMATICALLY REDIRECT TO THE MAIN PAGE, PLEASE TRY AGAIN"<<endl;
			Sleep(2000);
		}
	}
		accountfile.close();               //need to close the file
		system("cls");                    //use to clean the screen to make program be more smooth and clean
		main();                           //call main() to back to main page
	
	}
	else if(choose==2)                   //here if user want to login
	{
		cout<<"please enter your username"<<endl;   //they need to insert their username
		cin>>un;
		cout<<"please enter your password"<<endl;   //they need to insert their password
		cin>>pw;
		
		accountfile.open("account.txt",ios::in);   
		getline(accountfile,unfile);
		getline(accountfile,pwfile);
		accountfile.close();
		if(un!=unfile&&pw!=pwfile)       //here if the username and password that enter by user is doesn't match with username and password in file
		{	                             //automatic it will say the account doesn't not exist
		    loadingscreen();		
            accnotexist();
		}
		else if(un!=unfile)             //here if the username that enter by user is doesn't match with username in file
		{
			loadingscreen();
			wrongun();
			
		}
		else if(pw!=pwfile)             //here if the username that enter by user is doesn't match with username in file
		{
			loadingscreen();
		    wrongpass();
			
		}
		else
		{
			loadingscreen();          //here if the username and password that enter by user is match with username and pasword in file
			cout<<"WELCOME "<<un<<" TO THE PROGRAM"<<endl;  //welcoming the user that succesfully log in
		     logsuccess();
		}
		
	}
	else               //if user enter wrong number code, only 1 for sign up and 2 for log in
	{
		cout<<"something error"<<endl;
		cout<<"enter 1 to back to main page\n enter 2 to exit the program"<<endl;
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			main();
		}
		
			
	}                      
	system("cls");
	cout<<"------------------------------------------------------------------------"<<endl;
	cout<<"                   THANK YOU FOR USING MY PROGRAM                       "<<endl;
	cout<<"    I'LL TRY IMPROVE THIS LOGIN SYSTEM AND MAKE IT TO BIG PROGRAM       "<<endl;
	cout<<"------------------------------------------------------------------------"<<endl;
	
	
	/*cout<<"ENter the pass"<<endl;
	getline(cin,pass);
	cout<<pass<<endl;*/
	
	
	
	/*accountfile.open("account.txt", ios::out);
	accountfile<<"HAI JP JE NI";
	accountfile<<"\nNi mesti second line kan";
	accountfile.close();*/
	
	system("pause>0");
}



void wrongpass()
{
	int choice;
	        cout<<"LOGIN FAILED!!"<<endl;
			cout<<"WRONG PASS"<<endl;
			cout<<"Type 1 to back to main page"<<endl;				
			cin>>choice;
			
			if(choice==1)
			{
				system("cls");
				main();
			}
}

void wrongun()
{
	        int choice;
	        cout<<"LOGIN FAILED!!"<<endl;
			cout<<"WRONG USERNAME"<<endl;
			cout<<"Type 1 to back to main page"<<endl;
			cin>>choice;
			
			if(choice==1)
			{
				system("cls");
				main();
			}
}

void accnotexist()
{
        	int choice;
	        cout<<"ACCOUNT DID NOT EXIST!!"<<endl;
			cout<<"Type 1 to back to main page"<<endl;				
			cin>>choice;
		
			if(choice==1)
			{
				system("cls");
				main();
			}
}

void logsuccess()
{
	        int choice;
			cout<<"LOGIN SUCCESS!!"<<endl;		
			cout<<"Type 1 to back to main page"<<endl;				
			cin>>choice;
			
			if(choice==1)
			{
				system("cls");
				main();
			}
}

void loadingscreen()
{
	for(int i=0; i<20;i++)
	        {
          	system("cls");
          	cout<<"Please wait \n";
          	cout<<"[";
          	cout<< setw(20) << left << string(i,'=');
          	cout<<"]";
          	Sleep(10);          	
          }	
          system("cls");
}
