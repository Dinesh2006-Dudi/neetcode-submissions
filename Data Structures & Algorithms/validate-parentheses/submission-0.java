class Solution {
    public boolean isValid(String s) {
        
        Stack<Character> res=new Stack<>();

        for(char ch:s.toCharArray())
        {
            if(ch=='(' || ch=='{' || ch=='[')
            {
                res.push(ch);
            }
            else{
                if(res.empty())
                {
                    return false;
                }
            

            char top=res.peek();
            res.pop();

            if(ch==')' && top!='(')
            {
                return false;
            }
            if(ch=='}' && top!='{')
            {
                return false;
            }

            if(ch==']' && top!='[')
            {
                return false;
            }
        }
        }
        return res.isEmpty();
    }
}
