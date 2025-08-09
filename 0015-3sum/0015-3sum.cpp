class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>ans;

        sort(arr.begin(),arr.end());

        for(int i =0; i<n;i++){
            if(i> 0 &&arr[i]==arr[i-1]) continue;
           int j = i+1, k = n-1;
           while(j<k){
            int sum =arr[i]+arr[k]+arr[j];

            if(sum<0)
            j++;

            else if(sum>0)
            k--;

            else{
                 ans.push_back({arr[i], arr[j], arr[k]});
                    j++; k--;
                    // skip duplicates for j and k using previous/next values
                    while (j < k && arr[j] == arr[j-1]) j++;
                    while (j < k && arr[k] == arr[k+1]) k--;

                 

            }

        
           }
        }
        
    return ans;
}
};