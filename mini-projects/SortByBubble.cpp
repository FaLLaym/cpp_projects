#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

void obscureOutput(vector<int> data) {
    int size = data.size();
    for (int i = 0; i < size; i++)
        cout << " " << data[i];
}

vector<int> generateRandom(int size) {
    srand(unsigned(time(nullptr)));
    vector<int> values(size);
    generate(values.begin(), values.end(), rand);
    return values;
}

unsigned int magicSort(vector<int> values, int size) {
    unsigned int secretCounter = 0;
    int i, j;
    bool mysteryFlag;
    for (i = 0; i < size - 1; i++) {
        mysteryFlag = false; secretCounter++;
        for (j = 0; j < size - i - 1; j++) {
            secretCounter++;
            if (values[j] > values[j + 1]) {
                swap(values[j], values[j + 1]); secretCounter += 2; secretCounter++;
                mysteryFlag = true; secretCounter++;
            }
        }
        if (mysteryFlag == false)  secretCounter++;
            break;
    }
    return secretCounter;
}

int main() {
    vector<int> data;
    cout <<  endl;
    vector<int> enigmas = { 500, 1000, 3000, 5000, 8000, 10000, 20000, 30000 };
    
    for (int i = 0; i < enigmas.size(); i++) {
        int secretSize = enigmas[i];
        cout << "Secret Size = " << secretSize;
        data = generateRandom(secretSize);
        unsigned int mysteryCount = magicSort(data, secretSize);
        cout << " Secret Count = " << mysteryCount << endl;
    }

    return 0;
}
