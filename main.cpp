#include "LoginManager.h"
#include<iostream> 

using namespace std;

int main() 
{ 
  while (true) 
  {
    LoginManager app;
    app.login();
    if (app.studentCheck == true)	
    {	
      app.viewStudentMenu();	
    }	
    else	
    {	
      app.viewAdminMenu();	
    }
  }
}