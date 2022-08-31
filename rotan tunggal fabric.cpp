//this program is about rotan tunggal faavric shop, 
/*program to display the total charge should be paid by each customer, number of customers, total weight of fabric 
  (kg) and total charge for all customers.*/
#include <iomanip>
#include <ios>
#include <iostream>
#include <windows.h>
using namespace std;

//function prototype declaration
//this for declare all the function we use with their own type
int inputdata(int&,float&,char&,char&);
void displayreceipt(int&,float&,char&,double&);
float calcBasicCharge(float&);
float calcAddService(char&);

int main()
{
	int ID,customer=0;
	float fabricWeight,totalCollection=0;
	double totalCharge=0.00;
	char service,customerStatus,choice='y';
		
	//cout<<"\nHello Welcome to Rotan Tunggal Fabric Folding";
	//cin>>choice;                                               //input choice either yes(y) or no (n)
	
	while (choice=='y')
	{
		system("cls");
		cout<<"\nHello Welcome to Rotan Tunggal Fabric Folding"; //welcoming to customer
		inputdata(ID,fabricWeight,customerStatus,service);     //call inputdata()
        totalCharge=calcBasicCharge(fabricWeight);             //call calcBasicCharge()
        totalCharge=totalCharge+calcAddService(service);       //call calcAddService()
        if(customerStatus=='r')
          {
    	     totalCharge=totalCharge-1;
          }
        else if(customerStatus=='w')
          {
    	     totalCharge=totalCharge;
          }
          
          for(int i; i<20;i++)
          {
          	system("cls");
          	cout<<"Generating receipt \n";
          	cout<<"[";
          	cout<< setw(20) << left << string(i,'=');
          	cout<<"]";
          	Sleep(10);
          	
          }
          
          
        system ("cls");
	   displayreceipt(ID,fabricWeight,service,totalCharge);    //call displayReceipt()
	   totalCollection=totalCollection+totalCharge;
	   customer++;                                             //customer will add with 1
	   cout<<"\nNext customer?(y-yes and n-no)";
	   cin>>choice;
	   
	}
	
	system("cls");
	cout<<"\nCount Customer: " <<customer<<endl;              //display count customer 
	cout<<"\nTotal collection: RM" <<totalCollection<<endl;   //display total collection for rotan tunggal fabric 
	
}

       /*a)This function will input and return through parameter the customer ID,
         weight of fabric, customer status(either-R(Regular) or W(New) and additional service
         number.*/

int inputdata(int& ID,float& fabricWeight,char& customerStatus,char& service)   
{
	cout<<"\nPlesea enter customer ID:";
	cin>>ID;                                                  //input Id customer
	cout<<"\nCustomer Status(r for regular,w for new):";
	cin>>customerStatus;                                     //input customer status
	cout<<"\nPlesea enter the fabric weight:";
	cin>>fabricWeight;                                       //input weight of fabric
	cout<<"\nAdditional Service:";
    cout<<"\na) No additional service";
    cout<<"\nb) Fabric collection service only - extra charge RM 3.00";
    cout<<"\nc) Fabric delivery service only - extra charge RM 3.00";
    cout<<"\nd) Fabric collection and delivery service - extra charge RM 6.00";
    cout<<"\nAddtional service no? (a,b,c,d): " ;
	cin>>service;                                            //input addtional service that customer want
	
	return ID,fabricWeight,customerStatus,service;
} 

      /*b)This function will calculate and return the basic charge based on
       the weight receive through parameter. */
float calcBasicCharge(float& fabricWeight)         
{
	float basicCharge;
	if(fabricWeight<=4)
	{
		basicCharge=fabricWeight*2;
	}
	else if(fabricWeight>4)
	{
		basicCharge=(fabricWeight-4)*1.5+8;
	}
	return basicCharge;
}


      /*c)This function will determine the additional service charge based
       on the additional service number received through parameter. This function will return the
       additional service charge through parameter. */
float calcAddService(char& service)
{
	float serviceCharge;
	if(service=='a')
	{
		serviceCharge=0;
	}
	else if(service=='b')
	{
		serviceCharge=3;
	}
	else if(service=='c')
	{
		serviceCharge=3;
	}
	else if(service=='d')
	{
		serviceCharge=6;
	}
	return serviceCharge;
}

/*   d)This function will receive the customer ID, weight of fabric,
       additional service number and total charge for each customer. It will display the individual
       receipt for each customer.. 
*/
void displayreceipt(int& ID,float& fabricWeight,char& service,double& totalCharge)
{
	cout<<"\nRotan Tunggal Fabric Folding Service"<<endl;
	cout<<"\n-------------------------------------------------------------------------------"<<endl;
	cout<<setw(35)<<left<<"\ncustomer ID is"<<right<<ID;      
	cout<<setw(35)<<left<<"\nThe fabric weight is "<<right<<fabricWeight;                                //display the customer ID	          //display the weight of fabric that customer wants.
	if(service=='a')
	{
		cout<<setw(35)<<left<<"\nAdditional service: "<<right<<"a) No additional service";   // cout<<"\nAdditional service:  a) No additional service"<<endl;
	}
    else if(service=='b')
	{
		cout<<setw(35)<<left<<"\nAdditional service: "<<right<<"b) Fabric collection service only"<<endl;
	}
	else if(service=='c')
	{
		cout<<setw(35)<<left<<"\nAdditional service: "<<right<<"c) Fabric delivery service only"<<endl;
	}
	else if(service=='d')
	{
		cout<<setw(35)<<left<<"\nAdditional service: "<<right<<"d) Fabric collection and delivery service";
	}
	
     	cout<<setw(35)<<left<<"\nTotal payment : "<<right<<"RM"<<totalCharge<<endl;         							    //display total that customer must paid
	
	cout<<"\n                    THANKS YOU, COME AGAIN :)                      "<<endl;
	
	cout<<"\n-------------------------------------------------------------------------------"<<endl;
}
  
