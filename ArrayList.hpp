#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class ArrayList{
  private:
    T* values;
    int size;
    int capacity;
  public:
    ArrayList(int cap){
      values = new T[cap];
      size = 0;
      capacity = cap;
    }
    void add(T val){
      if(size<capacity){
        values[size]=val;
        size++;
      }
    }
    int length(){
      return size; 
    }
    T get(int index){
      return values[index];
    }
    void print(){
      for(int i=0;i<size;i++){
        values[i]->print();
      }
    }
};