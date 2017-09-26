/*There is no valid known header file to use system("cls") or system("pause") in c++ in case of linux operating system. It may be work on Windows*/

#include<string>
#include<iostream>

    using namespace std;
    void reservation();
    void cancelseat();
    void Displayseat();
    void view_cus_ID();
    void transac_report();
    void quit();
    	int passengerid;
    	int maxpassenger[18];
    	int seatx[6][3];
    	int count=0;
    	int transid[10];
    int main(void)
    {

    	int choice;
    	
    	do
    	{
    	cout<<"GREEN AIRLINE ON-LINE RESERVATION SYSTEM"<<endl;
    	cout<<"==============================================================="<<endl;
    	cout<<"Please select one of the following choice and proceed according"<<endl;
    	cout<<"(1)	Reserve a seat "<<endl;
    	cout<<"(2)	Cancel a reservation "<<endl;
    	cout<<"(3)	Display Seating arrangement "<<endl;
    	cout<<"(4)	View Waiting List "<<endl;
    	cout<<"(5)	Transaction Report "<<endl;
    	cout<<"(6)	quit "<<endl;
    	cout<<"==============================================================="<<endl;
    	cout<<"Enter choice: ";
    	cin>>choice;
    //	system("cls");
    	switch(choice)
    	{
    	case 1 :reservation();
    		break;
    	case 2 :cancelseat();
    		break;
    	case 3 :Displayseat();
    		break;
    	case 4 :view_cus_ID();
    		break;
    	case 5 :transac_report();
    		break;
    	case 6 :quit();
    		break;
    	default: cout <<" Invalid choice entered!"<<endl;
    	}
    	}
    	while(choice !=6);
    	return 0;
    	
    }
    	
    	void reservation()
    	{
    		int rowch, seatch;
    		int counter = 0;
    		int row,seat;
    		
    		cout <<"Please Enter Passenger ID 0000 - 9999: "<<endl;
    		cin>>passengerid;
    		cout<<"\t"<<"Seat1"<<"\t"<<"Seat2"<<"\t"<<"Seat3"<<endl;
    		cout<<"Row1"<<"\n"<<"\n"<<"\n"<<"Row2"<<"\n"<<"\n"<<"\n"<<"Row3"<<"\n"<<"\n"<<"\n"<<"Row4"<<"\n"<<"\n"<<"\n"<<"Row5"<<"\n"<<"\n"<<"\n"<<"Row6"<<endl;
    		for(seat= 0; seat<=6; seat++)
    		{
    			
    			
    			
    			for(row = 0; row <=3; row++)
    			{
    				if(seatx[seat][row] == 0)
    				{
    				
    					cout << seat+1<<"\t" << row+1<<endl;
    				
    					counter++;
    				}
    				
    			}
    		}
    			if(counter==0)
    			{
    				cout<<"Do you wanna be in waiting list?";
    			}
    			
    			else
    			{
    			cout<< "Assign seat(row col):"<<endl;
    			cout << "Seat: " << endl;
    			cin>>seatch;
    			cout << "Row: " << endl;
    			cin >> rowch;
    			cout<< "Seat selected is :" <<"Seat :"<<seatch<<"Row :"<<rowch<<endl; 
    			seatx[rowch-1][seatch-1] = 1;
    	//		system("pause");
    	//		system("cls");
    			}
    			return;
    		}
    	   
    	void cancelseat()
    	{
    		int choice;
    		string waiting[18];
    		int waitinglist=0;
    	cout << "Cancel Reservation" << endl;
    	cout << "(1) Cancel Reserved Seat" << endl;
    	cout << "(2) Cancel Queue In Waiting List" << endl;
    	cout << "(3) Return To Previous Screen" << endl;
    	cout << ">> Enter Choice: ";
    	cin >> choice;
    	
    	if ( choice == 1 )
    	
    	{	cout << "Enter Passenger ID: " << endl;
    		cin >> passengerid;
    		count--;
    		cout << "Your Reservation Has Been Cancelled.Thank You And We Hope To See You Again."<< endl;
    	}
    	else if ( choice == 2 )
    	 	
    	{	cout << "Enter Passenger ID: " << endl;
    		cin >> passengerid;
    		waitinglist--;
    		cout << "Your Waiting List Has Been Cancelled.Thank You And We Hope To See You Again." << endl;
    	}
    	else if ( choice == 3 )
    		{return;
    		}
    	return;
    	}
    void Displayseat()
    	{
    		cout<<"Not done"<<endl;
    		return;
    	}
    	
    void view_cus_ID()
    	{
    		cout<<"Not done"<<endl;
    		return;
    	}
    	
    void transac_report()
    	{
    		cout<<"Not done"<<endl;
    		return;
    	}
    	
    void quit()
    	{
    		cout<<"thank you" <<endl;
    		return;
    	}
