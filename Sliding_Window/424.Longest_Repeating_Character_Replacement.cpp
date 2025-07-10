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
    int characterReplacement(string s, int k) {

        int mx = 1;

        for(char i = 'A';i<'Z';i++)
        {
            deque<int> dq;
            int count = 0;

            for(int j=0;j<s.size();j++)
            {
                dq.push_front(s[j]);
                if(s[j]!=i) count++;

                if(count<=k) mx = max(mx,(int)dq.size());
                else
                {
                while(!dq.empty())
                    {
                        char bc = dq.back();
                        if(count<=k) break;

                        if(bc!=i) count--;
                        dq.pop_back();
                    }
                }
            }
        }
        return mx;
    }
};
void solve()
{
    Solution sol;
    string str = "ABAB";

    cout<<sol.characterReplacement(str,2);

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