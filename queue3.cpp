#include <iostream> 
#include "LoginManager.h"
using namespace std; 
  
struct Queue3 { 
    int index3;
    LoginManager obj3;
    int front3, rear3, capacity3; 
    int* queue3; 
    Queue3(int c3) 
    { 
        front3 = rear3 = 0; 
        capacity3 = 1000; 
        queue3 = new int; 
    } 
  
    ~Queue3() { delete[] queue3; } 
  
    // function to insert an element 
    // at the rear of the queue 
    void queueEnqueue3(int data3) 
    { 
        // check queue is full or not 
        if (capacity3 == rear3) { 
            cout <<"Queue 3 is full"<<endl; 
            return; 
        } 
  
        // insert element at the rear 
        else { 
            queue3[rear3] = data3; 
            rear3++; 
        } 
        return; 
    } 
  
    // function to delete an element 
    // from the front of the queue 
    void queueDequeue3() 
    { 
        // if queue is empty 
        if (front3 == rear3) { 
            cout <<"Queue 3 is Empty"<<endl;  
            return; 
        } 
  
        // shift all the elements from index 2 till rear 
        // to the left by one 
        else { 
            for (int i = 0; i < rear3 - 1; i++) { 
                queue3[i] = queue3[i + 1]; 
                
            } 
            cout<<"\nDocument Printed at Printer 3."<<endl;
  
            // decrement rear 
            rear3--; 
        } 
        return; 
    } 
  
    // print queue elements 
    void queueDisplay3() 
    { 
        int i; 
        if (front3 == rear3) { 
            cout <<"Queue 3 is Empty"<<endl;  
            return; 
        } 
  
        // traverse front to rear and print elements 
        cout << endl;
        for (i = front3; i < rear3; i++) { 
            cout<<"Document "<< queue3[i] << " of " << obj3.fullName[index3] << endl; 
        } 
        cout << endl;
        return; 
    } 
  
  
    // print front of queue 
    void queueFront3() 
    { 
        if (front3 == rear3) { 
            cout <<"Queue 3 is Empty"<<endl;  
            return; 
        } 
        cout <<endl;
        cout<<"The next print job at Printer 3 is: " << "Document " << queue3[front3] << endl;
        return; 
    } 
}; 
  
 