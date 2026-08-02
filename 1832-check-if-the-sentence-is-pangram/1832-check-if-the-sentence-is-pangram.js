/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let set = new Set();

    for(let ch of sentence){
        set.add(ch);
    }
     return set.size === 26;
};