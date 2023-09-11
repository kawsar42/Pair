#include<bits/stdc++.h>
#define ll long long int
#define kawsar ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
void solve()
{
   /* pair<string,vector<ll>>p;
    p.first="kawsar hossain";
    p.second={1,2,3,4,5};
    cout << p.first << endl;
    for(auto u:p.second)
    {
        cout << u << " ";
    }
    cout << endl;
    pair<ll,ll>p1,p2;
    p1={2,3};
    p2={2,1};
    if(p1<p2)cout << p1.first<< " " << p2.second<< endl;
    else cout << p2.first << " " << p2.second << endl;
    pair<ll,ll> p3=max(p1,p2);
    cout << p3.first << " " << p3.second<< endl;
    */

  /*
    vector<pair<ll,ll>>v;

        v.push_back({1,2});
        v.push_back({3,4});
        v.push_back({3,2});
        v.push_back({3,3});
        v.push_back({3,5});
        v.push_back({6,9});

    sort(v.begin(),v.end());
    for(auto t:v)
    {
        cout << t.first << " " << t.second << endl;
    }
    */
    ll n;
    cin >> n;
    vector<pair<ll,ll>>v(n);
    for(ll i=0;i<n;i++)
    {

      cin >> v[i].first  >> v[i].second;
    }


     sort(v.begin(),v.end());

     v.erase(unique(v.begin(),v.end()),v.end());
     cout << v.size() << endl;
     for(auto u:v)
     {
         cout << u.first << " " << u.second << endl;
     }
     cout << endl;



}
int main()
{
    kawsar;
    solve();
    return 0;
}
/*
7
2 3
1 2
3 1
3 2
3 3
3 4
3 5




*/
