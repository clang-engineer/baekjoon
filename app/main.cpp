#include <iostream>
#include <string>
#include <cstring>


std::string recursion(const char *s, int l, int r,  int count = 0){
    if(l >= r) return "1 " + std::to_string(count);
    else if(s[l] != s[r]) return "0 " + std::to_string(count);
    else return recursion(s, l+1, r-1, count+1);
}

std::string isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1, 1);
}


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::string s;
        std::cin >> s;

        std::cout << isPalindrome(s.c_str()) << "\n";
    }
    return 0;
}

