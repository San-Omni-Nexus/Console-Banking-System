#include <iostream>
using namespace std;
void cbalance(double balance){
    cout << "Your balance is $" << balance  << "\n"; 
}
double deposit(){
double amount;
cout << "What amount do you want to deposit?\n";
cin >> amount;

if(amount > 0){
    return amount;
}
else{
    cout  << "Invalid amount!";
    return 0;
}
}
double withdraw(double balance){
double amount;
do{cout << "What amount do you want to be withdrawn?\n";
cin >> amount;
    if(amount > balance){
    cout << "Insufficient funds!!\n";
}

else if(amount < 0){
    cout << "Invalid Amount!!\n";
}

} while ( amount < 0 || amount > balance);
    cout << "You have withdrawn $" << amount << "successfully.\n";
    return amount;
};


int main(){
int choice;
double balance = 0;

 do{
cout << "Welcome to Omni Finance\n";
 cout << "How may we help you?\n";
 cout << "1. Check Balance\n";
 cout << "2. Deposit Money\n";
 cout << "3. Withdraw Money\n";
 cout << "4. Exit\n";
 cin >> choice;

 switch(choice){
    case 1: cbalance(balance);
    break;
    case 2: balance += deposit();
            cbalance(balance);
    break;
    case 3: balance -= withdraw(balance);
            cbalance(balance);
    break;
    case 4:
    cout << "Thank you for trusting Omni finance.\n";
    cout << "have a good day.\n";
    break;
    default:
    cout << "Invalid Choice!!";
 } 
}while( choice != 4);
    return 0;
}