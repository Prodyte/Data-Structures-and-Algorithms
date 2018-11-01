/* https://www.codechef.com/problems/FCTRL2 */

#include <iostream>
using namespace std;
#define MAX 500
int mult(int i, int res[], int size);
void fact(int n)
{
    int res[MAX], size = 1, i;
    res[0] = 1;
    for(i = 2; i <= n; i++)
    {
        size = mult(i, res, size);
    }
    for(i = size-1; i >= 0; i--)
    {
        cout << res[i];
    }
    cout<<endl;
}
int mult(int i, int res[], int size)
{
    int carry = 0, j, prod;
    for(j = 0; j < size; j++)
    {
        prod = res[j] * i + carry;
        res[j] = prod % 10;
        carry = prod / 10;
    }
    while(carry)
    {
        res[size] = carry %10;
        carry = carry / 10;
        size++;
    }
    return size;
}
int main() {
	int t;
	cin >> t;
    int n;
	while( t-- )
	{
	    cin >> n;
	    fact(n);
   
	}
	return 0;
}