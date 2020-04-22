impl Solution {
    pub fn reformat(s: String) -> String 
    {
        let mut s2 = s;
        let mut answer = String::from("");
        let mut digits = String::from("");
        let mut letters = String::from("");
    
            
        for c in s2.chars()
        { 
            if(c >= '0' && c <= '9')
            {    
                digits.push(c);
            }
            else
            {
                letters.push(c);
            }
        }
        
        let mut lettersSz : i32= (letters.chars().count()) as i32;
        let mut digitsSz : i32= (digits.chars().count()) as i32;
        let mut diff = lettersSz - digitsSz;
        
        if diff < 0
        {
            diff = diff * -1;
        }

        if diff > 1
        {
            return answer;
        }

        if lettersSz > digitsSz 
        {
            for c in digits.chars()
            {
                let fst = letters.chars().next().unwrap(); //// abc
                let slicelet =  &letters[1..].to_owned();// bc
                letters = slicelet.to_string(); //bc
                answer.push(fst);
                answer.push(c);
            }
            answer.push(letters.chars().next().unwrap());
        }
        
        else
        {
            for c in letters.chars()
            {
                let fst = digits.chars().next().unwrap();
                let slicelet =  &digits[1..].to_owned();
                digits = slicelet.to_string();
                answer.push(fst);
                answer.push(c);
            }
            if digits.chars().count() > 0
            {
                answer.push(digits.chars().next().unwrap());
            }
        }
    
        return answer;
    }
}

