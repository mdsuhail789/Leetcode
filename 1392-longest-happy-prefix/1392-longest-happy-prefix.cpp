class Solution {
public:
    string longestPrefix(string s) {
        vector<int>lps(s.length(),0);
        int pre = 0, suf = 1;
        while(suf<s.length()){
            // match
            if(s[pre] ==s[suf]){
                lps[suf]=pre +1;
                suf++;pre++;
            }
            //not match 
            else{
                // pre = 0
                if(pre==0){
                    lps[suf] =0;
                    suf++;
                }

                else{
                    pre = lps[pre-1];
                }
            }
        }
        // string ans = "";
        // int n = lps[s.size()-1];
        // for(int i = 0;i<n;i++){
        //     ans= ans+ s[i];

        // }

        // return  ans;

        //optimize code
        int len = lps[s.size() - 1]; 
        return s.substr(0, len);
        
    }
};