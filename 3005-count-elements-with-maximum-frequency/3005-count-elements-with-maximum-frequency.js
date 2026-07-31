/**
 * @param {number[]} nums
 * @return {number}
 */
var maxFrequencyElements = function(nums) {
    let map = new Map();

    for(let num of nums){
        map.set(num,(map.get(num)||0)+1)
    };
    let maxFreq=0;

    for(let freq of map.values()){
        maxFreq =Math.max(freq,maxFreq);
    }

    let ans=0;

    for(let freq of map.values()){
        if(freq === maxFreq){
            ans+=freq;
        }
    }
    return ans;
};