Problem:
https://leetcode.com/problems/palindrome-number/
Solution:
class Solution {
public:
    bool isPalindrome(int x) {
      long long int rev=0,rem;
      long long int ans=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
            
        }
        if(ans==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
