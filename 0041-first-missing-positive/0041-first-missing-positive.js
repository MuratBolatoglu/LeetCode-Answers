/**
 * @param {number[]} nums
 * @return {number}
 */
var firstMissingPositive = function(nums) {
    let ind=1
    nums.sort(function(a, b){return a - b});
    nums = [...new Set(nums)];
    console.log(nums)
    for(let i=0;i<nums.length;i++){
        if(nums[i]>0){
            if(nums[i]!=ind) return ind
            else ind++
        }
    }
    if(nums[nums.length-1] >0) return nums[nums.length-1] +1
    return 1
};