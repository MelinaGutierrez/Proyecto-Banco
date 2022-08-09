#include <iostream>
#include <string.h>
#include "BankAccount.hpp"
#include "ArrayList.hpp"
using namespace std;

class Bank{
  private:
    ArrayList<BankAccount*>* accounts;
  public:
    Bank(){
      accounts = new ArrayList<BankAccount*>(100);
    }
    void add(BankAccount* account){
      accounts->add(account);
    }
    void print(){
      for(int i=0;i<accounts->length();i++){
          accounts->get(i)->print();
        }
    }
};