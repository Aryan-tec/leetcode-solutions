class Solution {
public:
    void permutations(int index, int n, vector<int> & nums, vector<vector<int>> & ans){
        if (index==n){
            ans.push_back(nums);
             return;}
        for(int i=index ; i<n ; i++){
            swap(nums[index],nums[i]);
            permutations(index+1 , n , nums, ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(0, nums.size(), nums, ans);
        return ans;
    }
};