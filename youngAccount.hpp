#pragma once
#include "BankAccount.hpp"

class TransactionalBankAccount: public BankAccount{
    private:
        int otroDato;
    public:
        TransactionalBankAccount(int _number, string _owner, double _balance)
            :BankAccount(_number,_owner,_balance){
            otroDato = 200;
            //...
        }
        void withdraw(double amounth){
            balance = balance - amounth*0.02;
            //BankAccount::withdraw(amounth*1.03);
        }
};