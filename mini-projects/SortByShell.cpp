#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <random>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

vector<int> generateRandomData(int n) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 1000);

    vector<int> data(n);
    generate(data.begin(), data.end(), [&]() { return dis(gen); });
    return data;
}

void printArray(const vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        cout << " " << arr[i];
    }
}

vector<int> shellSort(vector<int>& arr) {
    int size = arr.size();
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i += 1) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
    return arr;
}

int main() {
    vector<int> arr;
    cout << endl;
    vector<int> dataSizes = { 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 100000 };

    for (int i = 0; i < dataSizes.size(); i++) {
        int dataSize = dataSizes[i];
        cout << "Data Size = " << dataSize;
        arr = generateRandomData(dataSize);
        const clock_t begin_time = clock();
        shellSort(arr);
        cout << " Time = " << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
    }
    return 0;
}
