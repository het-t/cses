#include <iostream>  

int main() {  
    std::string str;

    std::getline(std::cin, str);

    int str_len = str.length();

    int i=0, j=1, k=0, counter = 1;
    while(k!=str_len-1) {
        if(str[k] != str[k+1]) {
            if (j > counter) counter = j;

            i = k+1;
            j = 1;
        }
        else {
            j++;
        }
        k++;
    }

    if (j > counter) counter = j;

    std::cout << counter;

    return 0;
}  

// i=0
// j=2
// k=0
// str_len=2
// counter=1