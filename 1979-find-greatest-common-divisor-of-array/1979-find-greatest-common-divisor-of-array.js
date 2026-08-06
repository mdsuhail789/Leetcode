/**
 * @param {number[]} nums
 * @return {number}
 */
var findGCD = function(nums) {
     let min = nums[0];
     let max = nums[0];

     for(let num of nums){
        if(num<min){
            min = num;
        }
        if(num>max)
        max =num
     }
     while(max%min !==0){
        let rem =max%min;
        max =min;
        min =rem;
     }

    return min;
};