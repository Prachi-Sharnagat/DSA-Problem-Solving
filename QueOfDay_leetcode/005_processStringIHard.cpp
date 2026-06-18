// class Solution {
// public:
//     string reverse(string s){
//         return string(s.rbegin(), s.rend());
//     }

//     char processStr(string s, long long k) {
//         string result = "";
//         for(char ch: s){
//             if(ch=='#'){
//                 result += result;
//             }
//             else if(ch=='%'){

//                 result = reverse(result);
//             }
//             else if(ch=='*'){
//                 result.pop_back();
//                 // result = removeLastChar(result);
//             }
//             else{
//                 result += ch;
//             }
//         }

//         if(result.empty() || (result.size()-1) < k){
//             return '.';
//         }

//         return result[k];
        
//     }
// };


// tried to attempt but memory exceed 