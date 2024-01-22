class Solution {
public:
    bool isPalindrome(int x) {
    string str  = to_string(x);
    int len = str.length();

    for (int i = 0; i < len / 2; i++) {

        if (str[i] != str[len - i - 1])
            return false;
    }

    return true;
    }


};