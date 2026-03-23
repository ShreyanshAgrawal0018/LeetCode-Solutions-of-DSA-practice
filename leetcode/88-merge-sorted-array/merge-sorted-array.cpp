class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        // for (int i=0; i<n; i++){
        //     int curr = b[i];
        //     int prev = m+i-1;
        //     while(prev >=0 && a[prev] > curr){
        //         a[prev+1] = a[prev];
        //         prev--;
        //     }
        //     a[prev+1]=curr;
        // }

        int idx = m+n-1, j=n-1 , i=m-1;
        while( i>=0 && j>=0){
            if (a[i] > b[j]){
                a[idx]=a[i];
                idx--;
                i--;
            }
            else{
                a[idx]=b[j];
                j--;
                idx--;
            }

        }
        while(j>=0){
            a[idx]=b[j];
            j--;
            idx--;
        }
    }
};