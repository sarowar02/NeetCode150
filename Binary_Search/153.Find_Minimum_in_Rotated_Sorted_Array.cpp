class Solution {
public:
    int findMin(vector<int>& nums) {

        int l = 0,r = nums.size()-1;

        while(l+1<r)
        {
            int mid = (l+r)/2;
            if(nums[nums.size()-1]>nums[mid]) r = mid;
            else l = mid;
        }

        return min(nums[r],nums[0]);
        
    }
};