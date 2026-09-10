#include <string>
#include <unordered_map>
class Solution {
public:
    int romanToInt(std::string s) {
       std::unordered_map<char, int> roman_map ={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
       };
       
       int total = 0;
       total = roman_map[s.back()];

       for(int i = s.length() - 2;i >=0;--i){
        int current_val = roman_map[s[i]];

        int next_val = roman_map[s[i+1]];

        if(current_val < next_val){
            total -= current_val;
        }else{
            total+= current_val;
        }
       }

        return total;
    }
};