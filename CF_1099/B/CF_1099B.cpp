#include<bits/stdc++.h>
using namespace std;
#define regi register int
#define ll long long
ll n;
ll ans;
ll xline=1,yline=1;
inline void max0(ll &a,ll b)
{
    a=max((ll)0,a-b);
    return ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    n--;
    while (n)
    {
        xline++;
        max0(n,yline);
        if (!n) break;
        yline++;
        max0(n,xline);
    }
    cout<<xline+yline<<endl;
    return 0;
}