/* https://www.codechef.com/problems/INTEST */

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n,k,temp;
    long long int count =0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp%k == 0)
        count++;
    }
    cout<<count;
    return 0;
}
