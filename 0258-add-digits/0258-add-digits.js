/**
 * @param {number} num
 * @return {number}
 */
var addDigits = function(num) {
    while(num>=10){
        num = AddDigits(num)
    } 
    return num;
};

function AddDigits(nums){
    let sum =0;
    while(nums>0){
        sum+= nums%10;
        nums = Math.floor(nums/10);
    }
    return sum;
}