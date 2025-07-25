class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int start = 0, end = 0, mid , ans;
        long long sum =0;
        //find start and end
        for(int i = 0; i<n;i++){
            sum = sum+ piles[i];
            end = max(end,piles[i]);
        }

        start = sum/h;
        if(!start)
        start =1;

        while(start<=end){
            mid = start+(end-start)/2;
            int total_times = 0;
            for(int i = 0;i<n;i++){
                total_times = total_times+piles[i]/mid;
                if(piles[i]%mid)
                total_times++;
            }
            if(total_times<=h)
            {
                ans = mid;
                end = mid-1;
            }
            else
            start = mid+1;
        }

        return  ans;
        
    }
};