class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();

        if (n==1) return nums[0];  //for single element

        int st=0, end=n-1;
        while (st<=end){
            int mid=st+((end-st)/2);
            if (mid==0 && nums[0] != nums[1]) return nums[mid];
            if (mid==n-1 && nums[mid]!=nums[mid-1] ) return nums[mid];
            
            if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            else{
                if (mid%2==0){   //half is even
                    if(nums[mid-1]==nums[mid]) end=mid;  
                    else st=mid;                         
                }
                else {         //half is odd
                    if(nums[mid-1]==nums[mid]) st=mid+1;   
                    else end=mid-1;                        
                }
            }
        }
        return -1;
    }
};