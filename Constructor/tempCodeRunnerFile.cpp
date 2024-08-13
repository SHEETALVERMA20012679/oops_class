#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int balance;
    
    BankAccount(int amount) {
        totalBalance += amount;
    }
};

int BankAccount::totalBalance = 0.0;

int main() {
    int amount; 
    cin>>amount;
    BankAccount account1(amount);
    cin>>amount;
    BankAccount account2(amount);


    cout << BankAccount::totalBalance << endl;

    return 0;
}
