class Solution {
public:
    string shortestPalindrome(string str) {
        string rev = str;
        reverse(rev.begin(),rev.end());
        int size = str.size();
        string temp = str +'$'+rev;
        

        int n = temp.size();
        vector<int>lps(n,0);

        int pre = 0, suf =1;
        while(suf<temp.size()){
            //matched
            if(temp[pre] == temp[suf]){
                lps[suf]= pre+1;
                suf++,pre++;
            }

            //not matched
            else{
                if(pre== 0){
                    lps[suf] = 0;
                    suf++;
                }
                else{
                    pre = lps[pre-1];

                }
            }
        }

        int len = size -lps[n-1];
        string add = rev.substr(0,len);

        return add+ str;
    }
};