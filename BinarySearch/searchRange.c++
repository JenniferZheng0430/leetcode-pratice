class Solution {
public:
    int binarySearch(vector<int>& nums, int left, int right, int target){
        if (left > right) return -1;
        
        int mid = (left + right) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) return binarySearch(nums,mid+1,right,target);
        else return binarySearch(nums,left,mid-1,target);
        
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int> res = {1,1};
        // res[0] = binarySearch(nums,0,nums.size(),target);
        // return res;
        
        int idx = binarySearch(nums,0,(nums.size()-1),target);
        
        cout << idx; // debug line
        
        if (idx == -1) return {-1,-1};
        
        int l = idx;
        int r = idx;
        while ((l-1 >= 0) && (nums[l-1] == nums[idx])) l--;
        while ((r+1 < nums.size()) && (nums[r + 1] == nums[idx])) r++;
        
        return {l,r};
    }
};