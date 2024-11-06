class Solution {
public:
    int compress(vector<char>& chars) {
        string compressed;
        int count=-1;
        char chr=chars[0];
        for(int i=0;i<chars.size();i++){
            if(chars[i]==chr){
                count++;
            } else{
                count++;
                if(count==1){
                    compressed+=chr;
                    count=0;
                    chr=chars[i];
                    continue;
                }
                compressed+=chr;
                chr=chars[i];
                string cstr= to_string(count);
                compressed+=cstr;
                count=0;
            }
        }
       
        count++;
        if(count==1){
            compressed+=chr;
        } else{
            compressed+=chr;
            chr=chars[chars.size()-1];
            string cstr= to_string(count);
            compressed+=cstr;
        }
        chars.clear();
        for(int i=0;i<compressed.length();i++){
            chars.push_back(compressed[i]);
        }
        return chars.size();
    }
};