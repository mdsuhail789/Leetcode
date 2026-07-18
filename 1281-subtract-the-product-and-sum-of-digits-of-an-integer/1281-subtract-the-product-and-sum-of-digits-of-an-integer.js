/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let sum =0,mul=1;
    while(n>0){
        sum = sum +(n%10);
        mul = mul *(n%10);
        n = Math.floor(n/10);
    }
    return mul-sum;
};