class Solution {
public:
    bool isfreqsame( vector <int> freq1, vector<int> freq2){
        for (int k = 0 ; k <26; k++ ){
            if (freq1[k]!=freq2[k]) return false;
            cout << freq1[k] << " " << freq2[k] << endl;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s2.length() < s1.length()) return false;
        vector <int> freq(26,0);
        
        for (int  i= 0 ; i<s1.length(); i++){
            freq[s1[i]-'a']++;
        }
        for(int i=0; i<= s2.length()- s1.length(); i++){
            vector <int> w_freq(26,0);
            for (int j=i; j< i+ s1.length(); j++){
                w_freq[s2[j]-'a']++;
            }
            if (isfreqsame(freq , w_freq)) return true;
        } 
        return false;
    }
};