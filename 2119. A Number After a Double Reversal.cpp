class Solution {
public:
    bool isSameAfterReversals(int num) {
        // Disable synchronization of input/output streams for faster execution
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        // Check if the number is less than 10, as single-digit numbers are always the same after any reversals
        if (num < 10) {
            return true;
        }
        
        // Check if the number ends with 0, as reversing it would change the leading 0, making it a different number
        return num % 10 == 0 ? false : true;
    }
};
