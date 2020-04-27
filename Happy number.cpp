//Using Floyd Detection algorithm
class Solution {
public:
    bool isHappy(int n) {
        int slow =sumSquare(n);
        int fast = sumSquare(slow);
        while(slow!=fast){
            slow = sumSquare(slow);
            fast = sumSquare(sumSquare(fast));
        }
        return slow==1?true:false;
    }
    
    int sumSquare(int n){
        int ans = 0;
        int temp =0;
        while(n){
            temp = n%10;
            ans+= temp*temp;
            n = n/10;
        }
        return ans;
    }
};