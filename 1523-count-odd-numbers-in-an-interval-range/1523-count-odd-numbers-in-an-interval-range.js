/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function(low, high) {
 
    // let count = 0;
    //    if(low<=0){
    //     for(let i =1;i<=high;i++){
    //         if(i %2===1){
    //             count++;
    //         }
    //     }
    //     return count;
    // }
    // for(let i =low;i<=high;i++){
    //     if(i%2=== 1){
    //      count++;
    //     }
    // }
    // return count;

    // optimize method
    let length = high-low+1;

    if(low%2===1 && high%2===1){
        return Math.ceil(length/2);
    }
    return Math.floor(length/2);
};