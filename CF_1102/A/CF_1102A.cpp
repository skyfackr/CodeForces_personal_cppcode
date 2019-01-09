#include<bits/stdc++.h>
using namespace std;
#define regi register int
#define ll long long
ll suma,sumb;
int n,sumn,l=1,r;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cout<<((n/2)+(n%2))%2<<endl;
/*    r=sumn=n;
    while (sumn)
    {
        sumb+=r;
        r--;
        sumn--;
        while (sumn&&suma<sumb)
        {
            suma+=l;
            l++;
            sumn--;
            if (sumn&&suma<sumb)
            {
                suma+=r;
                r--;
                sumn--;
            }
        }
    }
    cout<<abs(suma-sumb)<<endl;*/
    return 0;
}