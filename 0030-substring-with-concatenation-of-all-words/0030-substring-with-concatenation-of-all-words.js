var findSubstring = function(s, words) {
    let res="",ans=[]
    for(let i=0;i<s.length-words.length*words[0].length+1;i++){
        let list=[]
        for(let j=0;j<=words.length*words[0].length-1;j++){
            res+=s[i+j]
            if(res.length==words[0].length || i+j==s.length-1){
                list.push(res)
                res=""
            }
        }
        if(list.sort().toString()==words.sort().toString()) ans.push(i)
    }
    return ans
};