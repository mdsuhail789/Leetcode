class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size()-1,mid;
        if(nums.size()==1)
        return nums[0];
        while(start<=end){
            mid= start +(end-start)/2;
            //if single element is first element
            if(mid ==0 && nums[mid]!=nums[mid+1])
            return nums[mid];

            //if single element is last element
            if(mid == nums.size()-1 && nums[mid]!=nums[mid-1])
            return nums[mid];
            
            //find mid
            if(nums[mid] !=nums[mid-1]&&nums[mid] !=nums[mid+1])
            return nums[mid];
            // mid divided by 2 
            if(mid%2 == 0){
                //left move
                if(nums[mid]==nums[mid-1])
                end = mid-1;
                
                //right move
                else
                start = mid+1;

            }
            // mid is not divided by  2
            else{
               //right move
               if(nums[mid]==nums[mid-1])
               start = mid+1;
            //left move
               else
               end = mid-1;

     }
        }

        return -1;
    }
};