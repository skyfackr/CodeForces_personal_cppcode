#include<bits/stdc++.h>
using namespace std;
#define regi register int
#define ll long long
ll ans;
int h,sh1,sh2,sw1,sw2;
inline void hitstone(ll &ans,int sw)
{
    ans=max((ll)0,ans-sw);
    return ;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>ans>>h;
    cin>>sw1>>sh1>>sw2>>sh2;
    while(h)
    {
        ans+=h;
        if (h==sh1) hitstone(ans,sw1);
        if (h==sh2) hitstone(ans,sw2);
        h--;
    }
    cout<<ans<<endl;
    return 0;
}