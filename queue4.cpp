#include "LoginManager.h"
#include <iostream> 
using namespace std; 
  
struct Queue4 { 
    int index4;
    LoginManager obj4;
    int front4, rear4, capacity4; 
    int* queue4; 
    Queue4(int c4) 
    { 
        front4 = rear4 = 0; 
        capacity4 = 1000; 
        queue4 = new int; 
    } 
  
    ~Queue4() { delete[] queue4; } 
  
    // function to insert an element 
    // at the rear of the queue 
    void queueEnqueue4(int data4) 
    { 
        // check queue is full or not 
        if (capacity4 == rear4) { 
            cout <<"Queue 4 is full"<<endl; 
            return; 
        } 
  
        // insert element at the rear 
        else { 
            queue4[rear4] = data4; 
            rear4++; 
        } 
        return; 
    } 
  
    // function to delete an element 
    // from the front of the queue 
    void queueDequeue4() 
    { 
        // if queue is empty 
        if (front4 == rear4) { 
            cout <<"Queue 4 is Empty"<<endl;  
            return; 
        } 
  
        // shift all the elements from index 2 till rear 
        // to the left by one 
        else { 
            for (int i = 0; i < rear4 - 1; i++) { 
                queue4[i] = queue4[i + 1]; 
                
            } 
            cout<<"\nDocument Printed at Printer 4."<<endl;
            // decrement rear 
            rear4--; 
        } 
        return; 
    } 
  
    // print queue elements 
    void queueDisplay4() 
    { 
        int i; 
        if (front4 == rear4) { 
            cout <<"Queue 4 is Empty"<<endl;  
            return; 
        } 
  
        // traverse front to rear and print elements 
        cout << endl;
        for (i = front4; i < rear4; i++) { 
            cout<<"Document "<< queue4[i]<< " of " << obj4.fullName[index4] << endl; 
        } 
        cout << endl;
        return; 
    } 


  
  
    // print front of queue 
    void queueFront4() 
    { 
        if (front4 == rear4) { 
            cout <<"Queue 4 is Empty"<<endl;  
            return; 
        } 
        cout <<endl;
        cout<<"The next print job at Printer 4 is: " << "Document " << queue4[front4] << endl;
        return; 
    } 
}; 
  
 