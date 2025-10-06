class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n= nums.size();

        int s1=0, s2=0;

        for(int i=0; i<n; i++){
            s1+=i&1?nums[i]:0;
            s2+=!(i&1)?nums[i]:0;
        }

        return s2-s1;
    }
};
