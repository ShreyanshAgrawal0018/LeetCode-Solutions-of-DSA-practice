class Solution {
public:
    int isvalid(vector<int> vec,int k,int mid){
            int stu=1, pages=0;
            for(int i=0; i<vec.size(); i++){
                if(vec[i]>mid) return 0;

                if ((pages+vec[i]) <= mid){
                    pages+=vec[i];
                }
                else{
                    stu++;
                    pages=vec[i];
                }
            }
            if (stu > k) return 0;
            else return 1;
        }
    int splitArray(vector<int>& a, int k) {
        int min=0, max=0, ans=0;

        if(k>a.size()) return -1;

        for(int i=0; i<a.size(); i++){
            max+=a[i];
        }
        while(min <= max){
            int mid=min + (max-min)/2;
            if (isvalid(a, k, mid)==1){
                ans=mid;
                max=mid-1;
            }
            else min=mid+1;
        }
        return ans;
        
    }
};