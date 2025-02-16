/**
 * @param {number[]} numbers
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(numbers, target) {
    let map=new Map()
    for(let i=0;i<numbers.length;i++){
        if(map.has(target-numbers[i])) return [map.get(target-numbers[i])+1,i+1]
        else map.set(numbers[i],i)
    }
};