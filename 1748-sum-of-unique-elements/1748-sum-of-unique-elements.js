/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfUnique = function(nums) {
    let map =new Map();
    
    for(let num of nums){
        map.set(num,(map.get(num)||0)+1);
    }

    let sum =0;

    for(num of nums){
        if(map.get(num) === 1){
            sum+=num;
        }
    }

   return sum;
    
};