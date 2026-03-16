class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int cost1=nums[0], cost2=nums[1], cost3=nums[2];
        for(int i=3; i<nums.size(); i++){
            if (nums[i] <= cost3){
                if(cost3 <= cost2){
                    cost2=cost3;
                    cost3=nums[i];
                }
                else cost3=nums[i];
            }
            else if (nums[i] <= cost2){
                cost2=cost3;
                cost3=nums[i];
            }
        }
        
        return cost1+cost2+cost3;
    }
};