class Solution {
public:
    string removeOccurrences(string s, string p) {
        int c=1;
        while(c){
            c=0;
            for(int i=0; i<s.length(); i++){
                if (s[i]==p[0]){
                    int j;
                    for(j=0; j<p.length(); j++){
                        if (p[j] != s[i+j]) break;
                    }
                    
                    if (j==p.length()){
                        s.erase(i, p.length());
                        c=1;
                        break;
                    }
                }
            }
        }
        return s;
        
    }
};