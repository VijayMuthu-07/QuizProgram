#include <iostream>

int main() {
    std::string qbank[] = {"how old am i? ", "how much teja scored in cat1 math? ", "deepak's daughter name? "};
    std::string opt[][4] = {{"A. 12","B.17","C.18","D.19"}, {"A.24","B.6","C.23","D.45"}, {"A.giligili","B.moshi", "C.joshi","D.mahi"}};
    char key[] = {'C','B','A'};

    int size = sizeof(qbank)/sizeof(qbank[0]);
    char ans;
    int s = 0;

    for(int i=0;i<size;i++) {
        std::cout << qbank[i] << '\n';
        for(int j=0;j<4;j++) {
            std::cout << opt[i][j] << '\n';
        }
        
        do {
            std::cin >> ans;
        }while(ans != 'A' && ans != 'B' && ans != 'C' && ans != 'D');

        if(ans == key[i]) {
            s++;
        }
    }

    std::cout << "You got " << s << " questions right out of 3\n";

    return 0;
}