#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

unsigned int nop;

void printArray(const vector<int>& arr) {
    int size = arr.size();
    for (int i = 0; i < size; i++)
        cout << " " << arr[i];
}

vector<int> generateRandomData(int n) {
    srand(unsigned(time(nullptr)));
    vector<int> data(n);
    for (int i = 0; i < n; i++)
        data[i] = rand() * 100 * 100;
    return data;
}

vector<int> countingSort(vector<int>& inputArray) {
    int N = inputArray.size();
    int maxElement = 0;

    for (int i = 0; i < N; i++) {
        maxElement = max(maxElement, inputArray[i]);
    }

    vector<int> countArray(maxElement + 1, 0);

    for (int i = 0; i < N; i++) {
        countArray[inputArray[i]]++;
    }

    for (int i = 1; i <= maxElement; i++) {
        countArray[i] += countArray[i - 1];
    }

    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

int main() {
    vector<int> arr;
    cout << endl;
    vector<int> dataSizes = { 500, 1000, 3000, 5000, 8000, 10000, 20000, 30000 };

    for (int i = 0; i < dataSizes.size(); i++) {
        int N = dataSizes[i];
        cout << "N = " << N;
        arr = generateRandomData(N);
        nop = 0;
        const clock_t begin_time = clock();
        countingSort(arr);
        cout << " nop = " << nop << " time = ";
        cout << float(clock() - begin_time) / CLOCKS_PER_SEC << endl;
    }

    return 0;
}
