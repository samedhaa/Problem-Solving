impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        
        let mut reverse:i64 = 0; // n2
        let mut x2:i64 = x as i64;
        while x2 > 0
        {
            reverse += (x2%10);
            x2/=10;
            reverse *= 10;
        }
        reverse /= 10;
        return (x as i64 == reverse);
    }
}

// https://leetcode.com/problems/palindrome-number/
