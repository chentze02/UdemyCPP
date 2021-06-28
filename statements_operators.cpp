#include <iostream>
using namespace std;

int main(){
    int dollars {};
    int quarters {};
    int dimes {};
    int nickles {};
    int pennies {};
    int amount {};

    cout<<"Enter an amount in cents: "<<endl;
    cin>>amount;
    
    while (amount != 0){
        if (amount>= 100){
            dollars = amount/100;
            amount %= 100;
        }
        else if (amount>= 25){
            quarters = amount/25;
            amount %= 25;
        }
        else if (amount>= 10){
            dimes = amount/10;
            amount %= 10;
        }
        else if (amount>= 5){
            nickles = amount/5;
            amount %= 5;
        }
        else if (amount>= 1){
            pennies = amount/1;
            amount %= 1;
        }
    }
    cout<<"\nThe change is as follows: "<<endl;
    cout<<"Dollars: "<<dollars<<endl;
    cout<<"Quarters: "<<quarters<<endl;
    cout<<"Dimes: "<<dimes<<endl;
    cout<<"Nickles: "<<nickles<<endl;
    cout<<"Pennies: "<<pennies<<endl;

    return 0;
}