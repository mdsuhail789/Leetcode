/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    //  x = x.toString().split("");
    // let ans="";

    // for(let i =x.length-1;i>=0;i--){
    //     ans+=x[i];

    // }
    // return Number(ans);

    let reverse = 0;
    while(x !==0){
        let digit = x%10;//123
        reverse = reverse *10 +digit;
        x = Math.trunc(x/10);
    }
    const max = 2**31-1;
    const min = -(2**31);
    if(reverse>max || reverse<min){
        return 0;
    }
    return reverse;
};