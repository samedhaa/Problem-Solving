impl Solution {
    pub fn remove_duplicates(s: String) -> String {
        
        let mut answer = String::from("");
        
        for i in s.chars()
        {
            if(answer.len() != 0 && answer.chars().last().unwrap() == i)
            { 
                let slice = &answer[..answer.len()-1].to_owned().to_string();
                
                answer = slice.to_string();

            }
            else
            {
                 answer.push(i);
            }
        }
        return answer;
    }
}
