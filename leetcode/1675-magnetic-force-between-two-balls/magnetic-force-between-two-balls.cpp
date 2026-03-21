class Solution {
public:
    int isvalid(vector <int> vec,int m, int mid){
        int magnet=1, lastposition=vec[0];
        for(int i=1; i<vec.size(); i++){

            if (vec[i] - lastposition >= mid){
                magnet++;
                lastposition = vec[i];
            }
            if (magnet==m) return 1;
        }
        return 0;

    }
    int maxDistance(vector<int>& arr, int m) {
        sort(arr.begin(),arr.end());
        int n= arr.size();

        int st=1, end=arr[n-1] - arr[0], ans=0;
        while(st<=end){
            int mid= st + (end-st)/2;

            if ( isvalid(arr,m,mid)==1){
                st=mid+1;
                ans=mid;
            }
            else end=mid-1;
        }
        return ans;
    }
};