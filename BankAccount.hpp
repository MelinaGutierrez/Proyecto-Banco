#pragma once
#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    protected:
        int number;
        string onwer;
        int balance;
    public:
        BankAccount(int _number, string _owner, double _balance){
            number = _number;
            onwer = _owner;
            balance = _balance;
        }
        void deposit(int numAccount,double amounth){
          if(numAccount==number){
            balance = balance + amounth;
          }
        }

        void withdraw(double amounth){
          if(amounth<balance){
            balance = balance - amounth;
          }
          else{
            cout<<"Your balance is insufficient"<<endl;
          }
        }
      
        void print(){        
            cout<<number<<" - "<<onwer<<": "<<balance<<" Bs"<<endl;
        }
};