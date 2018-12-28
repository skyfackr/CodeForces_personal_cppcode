#include<bits/stdc++.h>
using namespace std;
#define regi register int
#define mo 998244353
#define ll long long
ll ans;
int n;
char ch;
int frontline=1,endline;
char frontch,endch='1';
bool frontover=true;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>frontch;
    for (regi i=2;i<=n;i++)
    {
        char ch;
        cin>>ch;
        if (frontover&&ch==frontch)
        {
            frontline++;
            continue;
        }
        frontover=false;
        if (endch!=ch)
        {
            endline=1;
            endch=ch;
            continue;
        }
        endline++;
    }
    if (frontover) 
    {
        cout<<((1+n)*n/2)%mo<<endl;
        return 0;
    }
    ans+=frontline+endline+1;
    ans%=mo;
    if (frontch==endch) ans=(ans+frontline*endline)%mo;
    cout<<ans<<endl;
    return 0;
}