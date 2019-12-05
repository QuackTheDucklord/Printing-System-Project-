#include "LoginManager.h"
#include "MenuOption.h"
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;


  MenuOption option; 

      void LoginManager::viewStudentMenu() 
    {
      cout << "You have " << currentBalance << " pages remaining." << endl;
      cout<<"\n1.Add Documents\n";
      cout<<"2.View Documents\n";
      cout<<"3.Add Document to Printer Queue\n";
      cout<<"4.Print\n";
      cout<<"5.View Positions in Queue\n";
      cout<<"6.Logout \n" << endl;
      cout << "Your choice: " << endl << endl;
      cin >> choice; 
      switch(choice)
      {
        case 1: option.studentOption1(); break; 
        case 2: option.studentOption2(); break;
        case 3: option.studentOption3(); break; 
        case 4: option.studentOption4(); break;
        case 5: option.studentOption5(); break;
        case 6: option.studentOption6(); break;
        default: cout << "Invalid choice. Please try again." << endl; viewStudentMenu();
      }
    }

     void LoginManager::viewAdminMenu()
    {
      cout << "1.View database" << endl; 
      cout << "3.Logout" << endl; 
      cout << "Your choice: " << endl << endl;
      cin >> choice;
      switch(choice)
      {
        case 1: option.adminOption1(); break;
        case 2: option.adminOption2(); break;
        default: cout << "Invalid choice. Please try again." << endl;
        viewAdminMenu(); 
      }
    }
     void LoginManager::login()
     {
      cout << "Welcome to NAC Printing System!" << endl;
LABEL1:
      cout << "Please input your username." << endl;
      cout << "Username: ";
      cin >> userNameAttempt;

LABEL2:         
      if(find(userName.begin(), userName.end(), userNameAttempt) != userName.end()) //if entered username is in the list
      {
			  index = 0;
			  cout << "Password: ";
        cin >> passwordAttempt;

         for (int i = 0; i < 30; ++i) // finding index of userName
        {
            if (userName.at(i) != userNameAttempt)
            {
              index += 1;
            }
        	  else
        	  {
        	 	  break;
        	  }
      }
        if(passwordAttempt == passWord[index]) // if password is in the list
        {
          cout << "Login successful." << endl << endl; //go to student class
          currentUser = userNameAttempt;
          currentBalance = balance[index];
          studentCheck = true;
          cout << "Welcome, " << fullName[index] << "!" << endl; 
        }
        else  // if password is not in the list
        {
          cout << "Login unsuccessful. Please try again." << endl;
          goto LABEL2;
        }
      }
      else if(userNameAttempt == "admin") // if entered username is admin 
      {
          cout << "Password: ";
          cin >> specialPasswordAttempt; 
          if (specialPasswordAttempt == "admin") 
          {
            cout << "Login sucessful." << endl << endl; // go to admin class
            studentCheck = false; 
            cout << "Welcome, Admin!" << endl; 
          }
        else
        {
            cout << "Login unsucessful. Please try again." << endl;
            goto LABEL1;
        }
      }

      else // if entered username is not in the list
      {
        cout << "Username not found. Please try again." << endl;
        goto LABEL1;
      }
     }
