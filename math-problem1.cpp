#include <iostream>

using namespace std;

int main() {
    int count = 0;
    cin >> count;
    if(count >= 1 && count <= 100) {
        double pos_num = 0;
        double neg_num = 0;
        double zeros = 0;
        int num = 0;
        for(int i = 0; i < count; ++i) {
            cin >> num;
            if(num >= -100 && num <= 100) {
                if(num < 0) {
                    neg_num += 1.0;
                } else if(num > 0) {
                    pos_num += 1.0;
                } else {
                    zeros += 1.0;
                }
            } else {
                zeros += 1.0;
            }
        }
        
        double fraction_pos_num = pos_num / (double)count;
        double fraction_neg_num = neg_num / (double)count;
        double fraction_zeros = zeros / (double)count;
        
        char output[20];
        sprintf(output, "%0.3f", fraction_pos_num);
        cout << output << endl;
        sprintf(output, "%0.3f", fraction_neg_num);
        cout << output << endl;
        sprintf(output, "%0.3f", fraction_zeros);
        cout << output << endl;
    }
    return 0;
}

