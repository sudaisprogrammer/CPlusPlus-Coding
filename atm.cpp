#include<iostream>
using namespace std;

class ATM{
    private:
        string name;
        int balance;
        int pin;
    public:
        ATM(string n,int b,int p):pin(p),balance(b),name(n){}
        void display(ATM &atm)const{
            cout<<"\nName is "<<atm.name<<endl;
            cout<<"PIN is "<<atm.pin<<endl;
            cout<<"Balance is "<<atm.balance<<endl<<endl;
        }
        void withdraw(ATM &atm,int amount){
            atm.balance-=amount;
            cout<<"\nAmount of "<<amount<<" has been withdrawn successfully\n";
            cout<<"Remaining balance is "<<atm.balance<<endl<<endl;
        }
        void deposit(int amount){
            this->balance+=amount;
            cout<<"\nAmount of "<<amount<<" has been deposited successfully\n";
            cout<<"Account Current balance is "<<this->balance<<endl<<endl;
        }
        void resetPIN(int newPIN){
            this->pin = newPIN;
            cout<<"\nPIN has been Updated successfully\n\n";
        }
};
int main(){
    ATM atm1 = ATM("Ahmad",120000,5515);
    atm1.display(atm1);
    atm1.deposit(3000);
    atm1.withdraw(atm1,3000);
    atm1.resetPIN(3000);
    atm1.display(atm1);
    return 0;
}