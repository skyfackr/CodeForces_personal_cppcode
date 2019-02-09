#include<bits/stdc++.h>
using namespace std;
int n,k,m;
#define maxn 100001
#define regi register int
priority_queue<int> shpower;
void getresult()
{
    long long all=0;
    for (regi i=1;i<=n;i++)
    {
        int a=shpower.top();
        shpower.pop();
        all+=a;
    }
    cout<<fixed<<setprecision(20)<<(double)all/(double)n<<endl;
    exit(0);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k>>m;
    for (regi i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        shpower.push(a);
    }
    int maxnum=shpower.top();
    shpower.pop();
    if (m<=k)
    {
        maxnum+=m;
        shpower.push(maxnum);
        getresult();
    }
    maxnum+=k;
    shpower.push(maxnum);
    m-=k;
    n=max(1,n-m);
    getresult();
    return 0;
}