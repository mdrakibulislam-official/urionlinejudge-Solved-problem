#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n, ans = 0.0;
    cin>>n;
    while(n--)
    {
        ans+=2.0;
        ans = 1.0/ans;
    }
    ans += 1.0;
    cout<<fixed<<setprecision(10)<<ans<<endl;
}
