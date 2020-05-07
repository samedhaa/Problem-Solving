impl Solution {
    pub fn rotate(nums: &mut Vec<i32>, k: i32) {
       
        let mk = k % nums.len() as i32;
        
        for i in 0..k
        {
            let val = nums.pop().unwrap();
            nums.insert(0,val);
        }
    }
}
