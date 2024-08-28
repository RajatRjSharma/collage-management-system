#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

int main ()
{
	int ch;
	cout<<"%%%%Welcome to college management system%%%%\n";
	cout<<"Enter 1 for Admin login \n\t 2 for Student login:"<<endl;
	cin>>ch;
	switch (ch)
	{
	case 1:
		{
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
    string userName;
    string userPassword;
        cout << "Please enter your UserID: ";
        cin >> userName;
        cout << "Please enter your Password: ";
        cin >> userPassword;

        if (userName == "12345" && userPassword == "123")
        {
            cout << "Welcome Sir!!!!!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
    cout<<"Enter 1 Updating a task \n\t 2 Delete a task\n";
    int h;
    cin>>h;
    switch (h)
    {
    case 1:
    	{
    	ofstream ofile; 
   string a;
   ofile.open ("task.txt");
   cout<<"Enter the task:";
   cin >>a;  
   ofile << a << endl; 
   cout << "Task updated to file" << endl; 
   ofile.close();  
   return 0;
    }
    	break;
    	
    	case 2:
    			fstream ofile; 
   ofile.open ("task.txt");
   cout<<"Enter 1 to delete the task";
   int b;
   cin >>b;  
   remove("task.txt"); 
   cout << "Task is deleted" << endl; 
   ofile.close();  
   return 0;
    		break;
    	}
    break;
}
	       case 2:
 	{
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
    string userName;
    string userPassword;
        cout << "Please enter your UserID: ";
        cin >> userName;
        cout << "Please enter your Password: ";
        cin >> userPassword;

        if (userName == "11804696" && userPassword == "123")
        {
            cout << "Welcome Student!!!!!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
    cout<<"Enter 1 for Viewing the task\n";
    int c;
    cin>>c;
    fstream ofile; 
   string a;
   ofile.open ("task.txt");
   cout<<"Task:\n";  
   while(getline(ofile,a))
   {
   cout <<a << endl;
}
   ofile.close();  
   return 0;
    break;
}
}
}
