class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m+n-1, i = m-1, j =n-1;

        while(i>=0 &&j>=0){
            if(nums1[i]>= nums2[j]){
                nums1[idx]= nums1[i];
                idx--,i--;
            }
            else{
                nums1[idx] = nums2[j];
                idx--, j--;
            }
        }

        while(j>=0){
            nums1[idx] = nums2[j];
                idx--, j--;

        }

        
    }
};