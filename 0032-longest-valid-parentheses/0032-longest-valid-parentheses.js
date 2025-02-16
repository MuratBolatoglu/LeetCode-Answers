/**
 * @param {string} s
 * @return {number}
 */
var longestValidParentheses = function(s) {
    let len=s.length,l=0,r=0,max=0
    for(let i=0;i<len;i++){
        if(s[i]=="(") l++
        else r++

        if(l==r) max=Math.max(max,r*2)
        else if(r>l){
            l=0
            r=0
        }
    }
    l=0
    r=0
    for(let i=len-1;i>=0;i--){
        if(s[i]=="(") l++
        else r++

        if(l==r) max=Math.max(max,r*2)
        else if(r<l){
            l=0
            r=0
        }
    }
    return max
};
//ya bir index ya da 2 index düşer