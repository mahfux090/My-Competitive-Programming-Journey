#include <iostream>
#include <string>
#include <map>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    std::cin >> n;
    std::map<std::string, int> db;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        if (db[s] == 0) {
            std::cout << "OK\n";
            db[s]++;
        } else {
            std::cout << s << db[s] << "\n";
            db[s]++;
        }
    }
    return 0;
}