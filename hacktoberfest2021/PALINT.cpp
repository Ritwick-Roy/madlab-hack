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
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first==b.first)
    return a.second>b.second;
    return a.first<b.first;
}
void solve()
{
    ll n,i,x,k,ans=-1,ans2=1e17,f,se;
    map<ll,ll> m;
    set<ll> s;
    cin>>n>>x;
    for(i=0;i<n;i++)
    { 
        cin>>k; 
        s.insert(k);
        m[k]++;
    }
    if(x==0)
    {
        tr(m,it)
        ans=max(ans,it->second);
        cout<<ans<<" 0\n";
        return;
    }
    vector<ll> a(all(s));
    vector<pair<ll,ll> > p;
    for(i=0;i<a.size();i++)
    {
        f=a[i];
        se=a[i]^x;
        p.push_back({m[f]+m[se],min(m[f],m[se])});
    }
    sort(all(p),comp);
    cout<<p[p.size()-1].first<<" "<<p[p.size()-1].second<<"\n";
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    multi 
    solve();
	return 0;
}
