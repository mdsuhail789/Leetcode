/**
 * @param {number} n
 * @return {boolean}
 */

function squareSum(num){
    let sum =0
    while(num>0){
        digit= num%10;
        sum+=digit *digit;
        num = Math.floor(num/10);
    }
    return sum;
}
var isHappy = function(n) {
     
     const seen = new Set();

     while(n !==1 && !seen.has(n)){
        seen.add(n);
        n = squareSum(n)
     }
     return n === 1;

};