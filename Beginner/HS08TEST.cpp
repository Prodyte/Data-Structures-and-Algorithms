/* https://www.codechef.com/problems/HS08TEST */

#include<iostream>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    long int withdraw;
    double amount;
    cin>>withdraw>>amount;
    if( withdraw%5 == 0 && withdraw < (amount-0.5))
    {
        amount-=withdraw + 0.50;
        cout<<fixed<<setprecision(2)<<amount<<endl;
    }
    return 0;
}
