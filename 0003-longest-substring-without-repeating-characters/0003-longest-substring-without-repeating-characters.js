/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    x=Array.from(new Set(s.split('')))
    if(x.length==s.length) return x.length
    let max=0
    let list=[]
    for(let i=0;i<s.length;i++){
        if(list.includes(s[i])){
            if(list.length>max) max=list.length
            list=list.slice(list.indexOf(s[i])+1)
            list.push(s[i])
        }
        else list.push(s[i])
        console.log(list)
        if(list.length>max) max=list.length
    }
    return max
};