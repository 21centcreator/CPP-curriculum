#include<iostream>
using namespace std;
//inline function 


float moneyreceived(int currentMoney, float factor=1.04)
{
return currentMoney*factor;
}

int main(){
    int money=100000;
    
    cout<<"If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will receive "<<moneyreceived(money, 1.1)<<"Rs after 1 year"<<endl;
    return 0;
}
