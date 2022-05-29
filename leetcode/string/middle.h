#include<string>
// 38 外观数列
std::string countAndSay(int n) {
    if (n == 1) return "1";
    std::string res;
    std::string last = countAndSay(n-1);
    int num = 1;
    int size = last.size();
    for (int i = 0; i < size; ++ i) {
        if (last[i] != last[i+1]) {
            res += std::to_string(num) + last[i];
            num = 1;
        } else {
            num++;
        }
    }
    return res;
}
