#include "Account.hpp"

int main() {
    Account acc1(100);    // Create account with 100
    Account acc2(50);     // Create account with 50
    
    Account::displayAccountsInfos();  // Shows total of 150 in 2 accounts
    
    acc1.makeDeposit(20);  // Deposit 20 to first account
    acc2.makeWithdrawal(30);  // Withdraw 30 from second account
    
    acc1.displayStatus();  // Shows status of first account
    Account::displayAccountsInfos();  // Shows updated totals
    
    return 0;
}
