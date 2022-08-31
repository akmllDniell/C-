
/*This project is shown money converter from Malaysian Ringgit (RM), United State Dollar (USD)
  and Thai Baht into the others money. 
  (source=https://www.xe.com)
  (latest update: 28/8/2022)
*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()

{
	float USD,Baht,Rupee,Rupiah,yen,SingaporeDollar,RM; //declare all the variable to store the data with data type 
	string money;                                       
	char continues = 'y';                               // continue is set manually to y for the program czn execute the while statement
	
	while (continues=='y')                              //the program will run if user insert y for yes and it will stop if user insert n for no
	{
	system("cls");
    cout<<"HEY WELCOME TO MY PROGRAM!!";    
    cout<<"\nSelect the type of money you want to convert: ";
    cout<<"\nRM - RINGGIT MALAYSIAN ";
    cout<<"\nUSD - UNITED STATE DOLLAR ";
    cout<<"\nBAHT - THAI BAHT"<<endl;
    cin>>money;

    if (money=="RM"||money=="rm"||money=="Rm")           // using or to make sure the program run smoothly, because user will insert a lot of ype with uppercase or lowercase and also both of them
    {
	cout<<"\nPlesea Enter Amount in Ringgit Malaysia(RM): "; //user will insert the amount of Malaysian Ringgit here
	cin>>RM;                                               // this input will store the Malaysian Ringgit ammount in the RM variable
	
	
	//this the current value for Ringgit Malaysian (29/8/2022)
	yen=RM*30.63;
	SingaporeDollar=RM*0.31;
	USD=RM*0.22;
	Baht=RM*8.06;
	Rupee=RM*17.90;
	Rupiah=RM*3324.59;
	
	//this output will display all the ammount after calculation
	system("cls");
	cout<<"-------------------------------------------------------------------"<<endl;	
	cout<<"You have enter "<<RM<<" Malaysian Ringgit"<<endl;
	cout<<"\n"<<"Your amount in Yen is "<<yen<<endl;
	cout<<"Your amount in Singapore Dollar is "<<SingaporeDollar<<endl;
	cout<<"Your amount in USD is "<<USD<<endl;
	cout<<"Your amount in Baht is "<<Baht<<endl;
	cout<<"Your amount in Rupee is "<<Rupee<<endl;
	cout<<"Your amount in Rupiah is "<<Rupiah<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;	
    }
	else if(money=="USD"||money=="usd"||money=="Usd")
    {
	cout<<"Plesea Enter Amount in United state Dollar: "; //user will insert the amount of USD here
	cin>>USD;                                             //this input will store the USD ammount in the USD variable
	
	//this the current value for United State Dollar (29/8/2022)
	yen=USD*137.83;
	SingaporeDollar=USD*1.40;
	RM=USD*4.47;
	Baht=USD*36.21;
	Rupee=USD*79.97;
	Rupiah=USD*14852.60;
	
	//this output will display all the ammount after calculation
	system("cls");
	cout<<"-------------------------------------------------------------------"<<endl;	
	cout<<"You have enter "<<USD<<" USD "<<endl;
	cout<<"\n"<<"Your amount in Yen is "<<yen<<endl;
	cout<<"Your amount in Singapore Dollar is "<<SingaporeDollar<<endl;
	cout<<"Your amount in Ringgit Malaysian is "<<RM<<endl;
	cout<<"Your amount in Baht is "<<Baht<<endl;
	cout<<"Your amount in Rupee is "<<Rupee<<endl;
	cout<<"Your amount in Rupiah is "<<Rupiah<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;	
    }
    else if(money=="BAHT"||money=="baht"||money=="Baht")
    {
	cout<<"Plesea Enter Amount in Thai Baht: "; //user will insert the amount of Thai Baht here
	cin>>Baht;                                  // this input will store the baht ammount in the baht variable
	
	//this the current value for Thai Baht (29/8/2022)
	yen=Baht*3.80;
	SingaporeDollar=Baht*0.039;
	USD=Baht*0.028;
	RM=Baht*0.12;
	Rupee=Baht*2.21;
	Rupiah=Baht*410.21;
	
	//this output will display all the ammount after calculation
	cout<<"-------------------------------------------------------------------"<<endl;	
	cout<<"You have enter "<<Baht<<" Thai Baht "<<endl;
	cout<<"\n"<<"Your amount in Yen is "<<yen<<endl;
	cout<<"Your amount in Singapore Dollar is "<<SingaporeDollar<<endl;
	cout<<"Your amount in USD is "<<USD<<endl;
	cout<<"Your amount in Ringgit Malaysian is "<<RM<<endl;
	cout<<"Your amount in Rupee is "<<Rupee<<endl;
	cout<<"Your amount in Rupiah is "<<Rupiah<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;	
    }
    else   // if the user insert the wrong spelling or other money it will display this error
    {
    	cout<<"\nEnter code only for example RM for Ringgit Malaysian";
		cout<<"\nPlease remember you only can choose money from United State Dollar(USD), Malaysian Ringgit(RM) and Baht";
    }
    
    cout<<"\nYou want to continue ? y-yes & n-no: "; //user give the choice either to continue the program or not if yes user must inser y if no user must insert n
    cin>>continues;
    
    if(continues=='n')
    {
    	system("cls");
    	cout<<"============================================================================";
        cout<<"\nTHANKYOU FOR USING MY PROGRAM :)"<<"\n";
        cout<<"============================================================================";
    }
}
	return 0;	
}




