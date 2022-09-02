#include<iostream>
#include<windows.h>
using namespace std;

int main ()
{
	int num1=0,num2=0;
	int total=0, loopcont=0,loopuse=0,countdown=0;
	float loop=0.00;
	char opr,cont='y';
	system("cls");
	cout<<"The program will automatically stop based on how many time you want to use"<<endl;
	cout<<"How many time you want to use this calculator?"<<endl;
	cin>>loopuse;
	loopcont=loopuse;
	countdown=loopuse;
	while(cont=='y'||cont=='Y')
	{
	

    system("cls");
	cout<<""<<endl;
	cout<<"    WELCOME TO CALCULATOR PROJECT MADE WITH C++        "<<endl;
	cout<<"   YOU HAVE GIVEN "<<countdown--<<" ATTEMPT TO USE THIS CALCULATOR     "<<endl;
	cout<<"      IF YOU WANT TO CONTINUE y-yes and n-no           "<<endl;
	cout<<""<<endl;
	
	cout<<"--------------------------------------"<<endl;
	cout<<num1<<"\t"<<opr<<"\t"<<num2<<"\t\t"<<total<<endl;      
	cout<<"--------------------------------------"<<endl;
	cout<<"   1   \t   2   \t   3   "<<endl;
	cout<<"   4   \t   5   \t   6   "<<endl;
	cout<<"   7   \t   8   \t   9   "<<endl;
	cout<<"       \t   0   \t       "<<endl;
	if(loop/loopcont==1.00)
	{	
		cout<<"do you want to continue?"<<endl;
		cin>>cont;
		loopcont=loopcont+loopuse;
		if(cont=='y')
		{
			main();
		}
		else
		{
			break;
		}
	}
	cout<<"Enter Here : ";
	cin>>num1>>opr>>num2;
	

	
	
	if(opr=='+')
	{
		 total = num1 + num2;
	}
	else if(opr=='-')
	{
		total = num1 - num2;
	}
	else if(opr=='*')
	{
		total = num1 * num2;
	}
	else if(opr=='/')
	{
		total = num1 / num2;
	}
	else
	{
		system("cls");
		cout<<"invalid operating"<<endl;
		cout<<"do you want to continue?"<<endl;
		cin>>cont;
		
	}
	

loop=loop+1.00;
    }
        system("cls");
	cout<<""<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"        THANK YOU FOR USING THIS PROGRAM               "<<endl;
	cout<<"  IF HAVE ANY ERROR PLEASE CONTACT ME VIA MY GITHUB    "<<endl;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<""<<endl;
    return 0;
}
