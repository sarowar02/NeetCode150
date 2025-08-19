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
    int findMin(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int mid,ans=10000;
        while(i<=j)
        {
            mid = (i+j)/2;
            ans = min(ans,nums[mid]);
            if(nums[i]>nums[j]) i = mid + 1;
            else j = mid-1;
        }
        return ans;
    }
};
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
   Solution sol;
   cout<<sol.findMin(v);
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