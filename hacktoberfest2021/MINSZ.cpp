#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
#define multi ll t;cin>>t;while(t--)
#define present(c,i) (c.find(i)!=c.end())
#define cpresent(c,i) (find(all(c),i)!=c.end())
#define mod 1000000007
void solve()
{
    ll n,i,j,k,sum=0,curr=0;
    vector<ll> ans;
    cin>>n;
    if(n==0)
    {
        cout<<"2\n1 1\n";
        return;
    }
    for(i=60;i>=0;i--)
    {
        if((n&(1LL<<i))!=(curr&(1LL<<i)))
        {
            ans.pb((1LL<<(i+1))-1);
            curr^=(1LL<<(i+1))-1;
        }
    }
    cout<<ans.size();
    if(!ans.empty())
    cout<<"\n";
    tr(ans,it)
    cout<<*it<<" ";
    cout<<"\n";
    
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multi 
    solve();
	return 0;
}
