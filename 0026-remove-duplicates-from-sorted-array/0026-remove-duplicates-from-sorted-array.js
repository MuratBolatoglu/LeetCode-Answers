/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let k=0
    dup=[]
    for(let i=0;i<nums.length;i++){
        if (dup.includes(nums[i])==false){
            nums[k]=nums[i]
            dup.push(nums[i])
            k++
        }    
    }
    return k
};