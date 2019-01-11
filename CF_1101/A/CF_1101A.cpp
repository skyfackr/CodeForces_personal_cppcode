#include<bits/stdc++.h>
using namespace std;
#define regi register int
#define ll long long
int q;
ll chu(ll a,ll b)
{
    ll ans=a/b;
    if (a%b) ans++;
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>q;
    for (regi i=1;i<=q;i++)
    {
        int l,r,d;
        cin>>l>>r>>d;
        ll ans;
        if (l>d)
        {
            cout<<d<<endl;
            continue;
        }
        ans=r+1;
        ans=chu(ans,d)*d;
        cout<<ans<<endl;
    }
    return 0;
}