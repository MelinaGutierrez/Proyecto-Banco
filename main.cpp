#include <iostream>
#include<stdlib.h>
#include<time.h>
#include "Bank.hpp"
#include "BankAccount.hpp"
#include "ArrayList.hpp"
#include "TransactionalBankAccount.hpp"
using namespace std;
void menu(){
  cout<<"Welcome to Cato's Bank"<<endl;
  cout<<"Choose an option"<<endl;
  cout<<"1. Create new account"<<endl;
  cout<<"2. Make a deposit"<<endl;
  cout<<"3. Make a withdrawal"<<endl;
  cout<<"4. exit"<<endl;   
}
int main() {
  string name;
  int cant,numAccount,option;
  Bank* b1= new Bank();  
  b1->add(new BankAccount(34,"Victor",500));
  b1->add(new BankAccount(24,"Jose",100));
  b1->add(new BankAccount(14,"Maria",150));
  b1->add(new BankAccount(44,"Sandra",0));
  do {      
    menu();        
    cout<<"Select an option: ";
    cin>>option;
    switch(option){
      case 1:
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter initial amount: ";
        cin>>cant;
        srand(time(NULL));
        numAccount = 1+rand()%(101-1);
        BankAccount* a1 = new BankAccount(numAccount,name,cant);        
        b1->add(a1);
        a1->print();        
        break;       
      case 2:
        cout<<"Enter your numAccount: ";
        cin>>numAccount;        
        break; 
      }                
      b1->print();
      system("cls");
    } while (option != 4);    
    /*cout<<"----"<<endl;
    TransactionalBankAccount* a2 = new TransactionalBankAccount(1,"Juampi",10);
    a2->print();
    a2->withdraw(5);
    a2->print();

    cout<<"----"<<endl;
    YoungAccount* a3 = new YoungAccount(1,"Juampi",0);
    a3->print();
    a3->deposit(0);
    a3->print();
    a3->withdraw(5);
    a3->print();*/

}