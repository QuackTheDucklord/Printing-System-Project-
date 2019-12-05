#include "MenuOption.h"
#include "hashtable.h"
#include "hashtable.cpp"
#include "queue1.cpp"
#include "queue2.cpp"
#include "queue3.cpp"
#include "queue4.cpp"
#include <iostream>
#include "LoginManager.h"
#include <iomanip>

using namespace std;

LoginManager app; 
MenuOption obj;
Queue1 Printer1(1000);
Queue2 Printer2(1000);
Queue3 Printer3(1000);
Queue4 Printer4(1000);

void MenuOption::studentOption1() 
{
  cout << endl;
  cout << "Enter Document Page Count: ";
  cin >> obj.Value;
  if(obj.Value > 15)
  {
    cout << "X-Too many Pages!" << endl;
  }
  else
  {
    cout << "Enter Document Name[1,2,3...n]: ";
    cin >> obj.Key;
    cout << endl;
    cout << "Document " << obj.Key << " has been added" << endl;
    cout << "What do you want to do next?" << endl;
  }
  app.viewStudentMenu();
} 
void MenuOption::studentOption2() 
{
HashMap<int,int> *h = new HashMap<int, int>;
  h->display();
  cout << "What do you want to do next?" << endl;
  app.viewStudentMenu();
}
void MenuOption::studentOption3() 
{
  HashMap<int,int> *h = new HashMap<int, int>;
  cout << "Enter the document name: " << endl;
  cin >>Key;
  if (h->get(Key) == -1) 
  {
    cout << "Invalid Document Name " << endl;
    //continue;
  } 
  else 
  {
    cout << "Document " << Key << " has been found. " << endl;   
  }
    cout << "Which printer do you want to use?" << endl;
    int printer_selection1;
    cin >>printer_selection1;
    switch(printer_selection1){
      case 1:
        Printer1.queueEnqueue1(Key);
        cout << "Document " << Key << " with " << obj.Value << " Pages is held at Printer 1" << endl;
        cout <<endl;
        h->deleteNode(Key); 
        app.currentBalance-=obj.Value;
        cout << endl;
        cout << "New Balance: " << app.currentBalance << endl;
        break;

        case 2:
          Printer2.queueEnqueue2(Key);
          cout << "Document " << Key << " with " << obj.Value << " Pages is held at Printer 2" << endl;
          cout << endl;
          h->deleteNode(Key);
          cout << endl;
          app.currentBalance-=obj.Value;
          cout << endl;
          cout << "New Balance: " << app.currentBalance << endl;
          break;

        case 3:
          Printer3.queueEnqueue3(Key);
          cout << "Document " << Key << " with " << obj.Value << " Pages is held at Printer 3" << endl;
          cout <<endl;
          h->deleteNode(Key); 
          cout <<endl;
          app.currentBalance-=obj.Value;
          cout <<endl;
          cout << "New Balance: " << app.currentBalance << endl;
          break;

        case 4:
          Printer4.queueEnqueue4(Key);
          cout << "Document " << Key << " with " << obj.Value << " Pages is held at Printer 4" << endl;
          cout <<endl;
          h->deleteNode(Key); 
          cout <<endl;
          app.currentBalance-=obj.Value;
          cout <<endl;
          cout << "New Balance: " << app.currentBalance << endl;
          break;

        default :
        cout << "Invalid choice. \n";
        obj.studentOption3();
      }
      app.viewStudentMenu();
}
void MenuOption::studentOption4() 
{
  
  cout << endl;
  cout << "Select Printer[1,2,3,4]: ";
  int printer;
  cin >> printer;
  switch(printer){
    case 1:
      Printer1.queueDequeue1();
      break;

    case 2:
      Printer2.queueDequeue2();
      break;

    case 3:
      Printer3.queueDequeue3();
      break;

    case 4:
      Printer4.queueDequeue4();
      break;

    default :
      cout << "Invalid choice." << endl;
      obj.studentOption4();
    }
app.viewStudentMenu();
}
void MenuOption::studentOption5() 
{
  cout << "Which printer's positions do you want to see? ";
  int printer_position;
  cin >>printer_position;
  switch(printer_position){
    case 1:        
      Printer1.queueDisplay1();
      Printer1.queueFront1();
      break;

    case 2:
      Printer2.queueDisplay2();
      Printer2.queueFront2();
      break;

    case 3:
      Printer3.queueDisplay3();
      Printer3.queueFront3();
      break;

    case 4:
      Printer4.queueDisplay4();
      Printer4.queueFront4();
      break;  

    default:
      obj.studentOption5();
    }
app.viewStudentMenu();
}
void MenuOption::studentOption6() 
{
cout << "Logging out..." << endl;
cout << "Logout sucessfull!" << endl << endl;
}

void MenuOption::adminOption1()
{
  cout << left << setfill(' ') << setw(20) << "First Last Name" << left << setfill(' ') << setw(15) << "Username" << left << setfill(' ') << setw(15) << "Password" << left << setfill(' ') << setw(15) << "Balance" << endl << endl;

for (int i = 0; i < 30; ++i) 
{
  cout << left << setfill(' ') << setw(20) << app.fullName[i] << left << setfill(' ') << setw(15) << app.userName[i] << left << setfill(' ') << setw(15) << app.passWord[i] << left << setfill(' ') << setw(15) << app.balance[i] << endl;
}
  cout << endl;
app.viewAdminMenu();
}
void MenuOption::adminOption2()
{
cout << "Logging out..." << endl;
cout << "Logout sucessfull!" << endl << endl;
}
