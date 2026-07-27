/**
 * @param {number[]} nums
 * @return {boolean}
 */
var divideArray = function(nums) {
    // let count=1;
    // let variable;

    // for(let i=0;i<nums.length;i++){
    //     for(let j=i+1;j<nums.length;j++){
    //         if(nums[i] === nums[j]){
    //             count++;
    //         }
    //     }
    //     variable=count;
    //     count =1;
    //     if(variable%2 !==0){
    //         return false;
    //     }
    // }
    // return true;
    let visited = new Array(nums.length).fill(false);

    for(let i =0;i<nums.length;i++){
        if(visited[i])continue;

        let count=1;
        visited[i]=true;
        for(let j=i+1;j<nums.length;j++){
            if(nums[i]=== nums[j]){
                count++;
                visited[j]=true;
            }
        }
        if(count%2 !==0){
            return false;
        }
    }
    return true;
};