class Solution {
public:
//dutch national flag algorithm
    void sortColors(vector<int>& a) {
        int n = a.size();
        int mid=0, low=0, high=(n-1);
        while(mid<=high){
            if (a[mid]==2){
                swap(a[mid],a[high]);
                high--;
            }
            else if (a[mid]==0){
                swap(a[mid],a[low]);
                low++;
                mid++;
            }
            else mid++;
        }

    }
};