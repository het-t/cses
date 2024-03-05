#include <iostream>

int main() {
    int len;    
    std::cin >> len;

    if (len == 1) {
        std::cout << 0;
        return 0;
    }
    
    unsigned long long int past_num;
    std::cin >> past_num;

    unsigned long long int current_num;
    std::cin >> current_num;

    unsigned long long int moves = 0;

    for(int i = 2; i!=len; i++) {
        if (current_num < past_num) {
            moves += past_num - current_num;
            current_num = past_num;
        }
        past_num = current_num;
        std::cin >> current_num;
    }

    if (current_num < past_num) moves += past_num - current_num;
    
    std::cout << moves;

    return 0;
}