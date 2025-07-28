#include "bits/stdc++.h" 
using namespace std; 
#define max(a, b) (a < b ? b : a) 
#define min(a, b) ((a > b) ? b : a) 
#define mod 1e9 + 7 
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)  
#define INF 1000000000000000003 
typedef long long int ll; 
typedef vector<int> vi; 
typedef pair<int, int> pi; 
#define F first 
#define S second 
#define PB push_back 
#define POB pop_back 
#define MP make_pair 
#define endl "\n"

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       int l = 0, r = *max_element(piles.begin(),piles.end());

       while(l+1<r)
       {
         int mid = (l+r)/2;

         if(ok(piles,mid,h)) r = mid;
         else l = mid;
       }

       return r;
    }
    bool ok(vector<int> piles,int k,int h)
    {
        int time = 0;

        for(int i=0;i<piles.size();i++)
        {
            time += (piles[i]+k-1)/k;
            if(time>h)
            {
                return false;
            }
        }
        return true;
    }
};

void solve()
{
    
  int n,h; 
  cin>>n>>h;
  vector<int> piles(n);
  for(int i=0;i<n;i++)cin>>piles[i];

  Solution sol;
  cout<<sol.minEatingSpeed(piles,h);
}
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T=1; 
    //cin >> T; 
    while (T--) { 
        solve();
    } 
    return 0; 
} 