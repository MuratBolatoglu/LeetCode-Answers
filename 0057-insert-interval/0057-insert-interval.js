/**
 * @param {number[][]} intervals
 * @param {number[]} newInterval
 * @return {number[][]}
 */
var insert = function(inter, newInterval) {
    inter.push(newInterval)
    inter.sort(function(a, b){return a[0] - b[0]})
    let list=[inter[0]]
    for(let i=1;i<inter.length;i++){
        if(inter[i][0]<=list[list.length-1][1]) list[list.length-1][1]=Math.max(inter[i][1],list[list.length-1][1])
        else list.push(inter[i])
    }
    return list
};