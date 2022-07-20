class Solution {
public:
    bool isPalindrome(string s) {

	char *tmp = new char[s.length()];
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			tmp[j++] = s[i] + 32;
		}
		else if (s[i] >= 97 && s[i] <= 122) {
			tmp[j++] = s[i];
		}
	}
	
	for (int i = 0; i <= j / 2; i++) {
		if (tmp[i] != tmp[j - i - 1]) return false;
	}

	return true;
}
};
