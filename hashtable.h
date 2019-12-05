#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream> 

using namespace std;

template<typename K, typename V>
struct HashNode {

  V value;
  K key;
  HashNode(K key, V value);

};

template<typename K, typename V>
struct HashMap {

    HashNode<K,V> **arr;
    int capacity;
    int size;
    HashNode<K,V> *d1; 
    HashMap();
    int hashCode(K key);
    void insertNode(K key, V value);
    int deleteNode(int key);
    int get(int key);
    int sizeofMap() { return size; }
    bool isEmpty() { return size == 0; }
    void display();
};
#endif