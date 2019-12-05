#include <iostream> 
#include "LoginManager.h"
using namespace std;


struct Queue1 { 
    int index1;
    LoginManager obj1;
    int front1, rear1, capacity1; 
    int* queue1;
    Queue1(int c1) 
    { 
        front1 = rear1 = 0; 
        capacity1 = 1000; 
        queue1 = new int; 
    } 
  
    ~Queue1() { delete[] queue1; } 
  
    // function to insert an element 
    // at the rear of the queue 
    void queueEnqueue1(int data1) 
    { 
        // check queue is full or not 
        if (capacity1 == rear1) { 
            cout <<"Queue 1 is full"<<endl; 
            return; 
        } 
  
        // insert element at the rear 
        else { 
            queue1[rear1] = data1; 
            rear1++; 
        } 
        return; 
    } 
  
    // function to delete an element 
    // from the front of the queue 
    void queueDequeue1() 
    { 
        // if queue is empty 
        if (front1 == rear1) { 
            cout <<"Queue 1 is Empty"<<endl;  
            return; 
        } 
  
        // shift all the elements from index 2 till rear 
        // to the left by one 
        else { 
            for (int i = 0; i < rear1-1; i++) { 
              
              queue1[i] = queue1[i + 1];
             
              
            } 
            cout<<"\nDocument Printed at Printer 1."<<endl;
  
            // decrement rear 
            rear1--; 
        } 
        return; 
    } 

   
 
  
    // print queue elements 
    void queueDisplay1() 
    { 
        int i; 
        if (front1 == rear1) { 
            cout <<"Queue 1 is Empty"<<endl;  
            return; 
        } 
  
        // traverse front to rear and print elements 
        cout << endl;
        for (i = front1; i < rear1; i++) { 
            cout<<"Document "<< queue1[i]  << " of " << obj1.fullName[index1]<<  endl; // << userName
        } 
        cout << endl;
        return; 
    } 
  
    // print front of queue 
    void queueFront1() 
    { 
        if (front1 == rear1) { 
            cout <<"Queue 1 is Empty"<<endl;  
            return; 
        } 
        cout <<endl;
        cout<<"The next print job at Printer 1 is: " << "Document " << queue1[front1] << endl;
        return; 
    } 

  
}; 
  
 