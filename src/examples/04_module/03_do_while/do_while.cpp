#include "do_while.h"
#include<iostream>

using std::cout;    using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    int choice;

	do
	{
        display_menu();

		cin>>choice;

        if(choice < 4)
        {
            execute_menu(choice);
        }
		
	}while(choice != 4);

}

void display_menu()
{
    cout<<"1-Option 1\n";
	cout<<"2-Option 2 \n";
	cout<<"3-Option 3 \n";
    cout<<"4-Exit\n";
	cout<<"Enter a menu number: ";    
}

void execute_menu(int option)
{
    switch(option)
    {
    case 1:
        cout<<"You chose option 1\n";
        break;
    case 2:
        cout<<"You chose option 2\n";
        break;
    case 3:
        cout<<"You chose option 3\n";
        break;
    default:
        cout<<"Invalid option\n";
    }
}

