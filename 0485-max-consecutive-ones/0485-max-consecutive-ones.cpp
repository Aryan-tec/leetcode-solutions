class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0, cnt=0 , l=0;
        while(l < nums.size()){
            if(nums[l]==1){
                cnt++;
            }
            else{
                cnt = 0;
            }
            maxi = max(cnt , maxi);
            l++;
        }
        return maxi;

    }
};