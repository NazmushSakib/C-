//1+2+3+4+............+n = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=0;
    cout << "Enter the last number : ";
    cin >>n;

    for(int i =1;i<=n;i++)
    {
        sum = sum + i;
    }
    cout <<"The value of the series is -> 1+2+3+4+..............+"<<n<<" = "<<sum<<endl;

    return 0;
}