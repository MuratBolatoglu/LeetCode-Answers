/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        unsigned long long l=1,r=n;
        while(l<=r){
            unsigned long long mid=(r+l)/2 ;
            unsigned long long ret=guess(mid);
            if(ret==0) return mid;
            else if(ret==1) l=mid+1;
            else r=mid-1; 
        } 
        return 0;
    }
};