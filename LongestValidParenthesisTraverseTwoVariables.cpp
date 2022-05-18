class Solution {
public:
    int longestValidParentheses(string s) {
int open=0, close=0;
int max=0;
for (int i=0; i<s.size(); i++){
if (s[i] == '(') {
  open++;
}       
if (s[i] == ')') {
  close++;
}
if (close>open) {
  close=0;
  open=0;
}
if (close==open) {
  if (close*2 > max) {
max=close*2;
  }
  
}
}
close =0; 
open=0;
for (int i=s.size()-1; i>=0; i--) {
if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
  open++;
}       
if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
  close++;
}
if (close<open) {
  close=0;
  open=0;
}
if (close==open) {
  if (close*2 > max) {
max=close*2;
  }
}
}
return max;
}
};
