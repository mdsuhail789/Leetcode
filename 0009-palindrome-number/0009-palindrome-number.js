/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
       let reverse=0;

       if( x<0  ||  (x%10 === 0 && x !=0))
           return false;
       

       while(x>reverse){
        reverse= reverse* 10 +x%10;
        x = Math.floor(x/10);
       }
       return(reverse === x || x === Math.floor(reverse/10));

};