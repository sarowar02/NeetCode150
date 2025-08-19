class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;

        while(l+1<r)
        {
            int mid = (l+r)/2;

            if(nums[r]>=nums[mid])
            {
                if(target>=nums[mid] and target<=nums[r]) l = mid;
                else r = mid;
            }
            else 
            {
                if(target>=nums[l] and target<=nums[mid]) r = mid;
                else l = mid;
            }

        }

        if(nums[l]== target) return l;
        else if(nums[r]== target) return r;
        else return -1;
    }
};