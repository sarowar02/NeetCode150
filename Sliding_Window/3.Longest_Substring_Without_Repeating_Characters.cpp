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
    int lengthOfLongestSubstring(string s) {
        deque<char> dq;
        unordered_set<char> st;

       int  mx = 0;

        for(int i=0;i<s.size();i++)
        {
            dq.push_front(s[i]);
            if(st.find(s[i])!=st.end())
            {
                mx = max(mx,st.size());
                while(dq.back()!=dq.front())
                {
                    char c = dq.back();
                    dq.pop_back();
                    st.erase(c);
                }
                char c = dq.back();
                dq.pop_back();
                st.erase(c);

            }
             st.insert(s[i]);
        }

        return mx;


    }
};
void solve()
{
    Solution sl;
    string str = "abcabcbb";

    cout<<sl.lengthOfLongestSubstring(str)<<endl;

}
int main() 
{ 
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    int T=1; 
   // cin >> T; 
    while (T--) { 
        solve();
    } 
    return 0; 
} 