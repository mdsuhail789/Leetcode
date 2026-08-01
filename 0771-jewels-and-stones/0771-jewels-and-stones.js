/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    let set = new Set();

    for(let num of jewels){
        set = set.add(num);
    }
    let count =0;
    for(let num of stones){
        if(set.has(num)){
           count++;
        }
    }
    return count;
};