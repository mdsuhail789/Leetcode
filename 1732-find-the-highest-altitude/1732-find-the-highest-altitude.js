/**
 * @param {number[]} gain
 * @return {number}
 */
var largestAltitude = function(gain) {
    let current = 0;
    let maxCurrent =0;

    for(let i=0;i<gain.length;i++){
        current+=gain[i];
        if(current>maxCurrent){
            maxCurrent =current;
        }
    }
    return maxCurrent;
};