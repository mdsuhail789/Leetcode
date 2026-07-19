/**
 * @param {number} n
 * @return {boolean}
 */
var isUgly = function(n) {
    if(n<=0){
        return false;
    }
    let arr = [2,3,5];
    for(let factors of arr){
          while(n%factors === 0){
                n /=factors;
            }
        
    }
    return n === 1;
};