/**
 * @param {number} left
 * @param {number} right
 * @return {number[]}
 */
var selfDividingNumbers = function(left, right) {
    let result= [];
    for(let i = left;i<=right;i++){
     if(isselfDividingNumbers(i)){
        result.push(i);
    }
    }
    return result;
  
};

function isselfDividingNumbers(nums){
    let original = nums;
    while(nums>0){
        let digit = nums%10;
        if(digit === 0 || original% digit !== 0){
            return false;
        }
        nums = Math.floor(nums/10);
    }
    return true;
}