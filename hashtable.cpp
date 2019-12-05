#include "hashtable.h"

using namespace std; 

//template for generic type 
template<typename K, typename V> 
   
    HashNode<K,V>::HashNode(K key, V value) 
    { 
        this->value = value; 
        this->key = key; 
    } 
  
template<typename K, typename V> 
    HashMap<K,V>::HashMap() 
    { 
        //Initial capacity of hash array 
        capacity = 20; 
        size=0; 
        arr = new HashNode<K,V>*[capacity]; 
          
        //Initialise all elements of array as NULL 
        for(int i=0 ; i < capacity ; i++) 
            arr[i] = NULL; 
          
        //dummy node with value and key -1 
        d1 = new HashNode<K,V>(-1, -1); 
    } 
    // This implements hash function to find index 
    // for a key 
    template<typename K, typename V>
    int HashMap<K,V>::hashCode(K key) 
    { 
        return key % capacity; 
    } 
      
    //Function to add key value pair 
    template<typename K, typename V>
    void HashMap<K,V>::insertNode(K key, V value) 
    { 
        HashNode<K,V> *temp = new HashNode<K,V>(key, value); 
          
        // Apply hash function to find index for given key 
        int hashIndex = hashCode(key); 
          
        //find next free space  
        while(arr[hashIndex] != NULL && arr[hashIndex]->key != key 
               && arr[hashIndex]->key != -1) 
        { 
            hashIndex++; 
            hashIndex %= capacity; 
        } 
          
        //if new node to be inserted increase the current size 
        if(arr[hashIndex] == NULL || arr[hashIndex]->key == -1) 
            size++; 
        arr[hashIndex] = temp; 
    } 
      
    //Function to delete a key value pair
    template<typename K, typename V>
    int HashMap<K,V>::deleteNode(int key) 
    { 
        // Apply hash function to find index for given key 
        int hashIndex = hashCode(key); 
          
        //finding the node with given key 
        while(arr[hashIndex] != NULL) 
        { 
            //if node found 
            if(arr[hashIndex]->key == key) 
            { 
                HashNode<K,V> *temp = arr[hashIndex]; 
                  
                //Insert dummy node here for further use 
                arr[hashIndex] = d1; 
                  
                // Reduce size 
                size--; 
                return temp->value; 
            } 
            hashIndex++; 
            hashIndex %= capacity; 
  
        } 
          
        //If not found return null 
        return 0; 
    } 
      
    //Function to search the value for a given key 
    template<typename K, typename V>
    int HashMap<K,V>::get(int key) 
    { 
        // Apply hash function to find index for given key 
        int hashIndex = hashCode(key); 
        int counter=0; 
        //finding the node with given key    
        while(arr[hashIndex] != NULL) 
        {    int counter =0; 
             if(counter++>capacity)  //to avoid infinite loop 
                return 0;         
            //if node found return its value 
            if(arr[hashIndex]->key == key) 
                return arr[hashIndex]->value; 
            hashIndex++; 
            hashIndex %= capacity; 
        } 
          
        //If not found return null 
        return 0; 
    } 
    //Function to display the stored key value pairs
    template<typename K, typename V> 
    void HashMap<K,V>::display() 
    { 
        for(int i=0 ; i<capacity ; i++) 
        { 
            if(arr[i] != NULL && arr[i]->key != -1) 
                cout << "Document:" << arr[i]->key <<" --->" 
                     <<"  Pages:"<< arr[i]->value << endl; 
        } 
    } 