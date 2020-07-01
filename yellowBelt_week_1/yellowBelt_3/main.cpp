#include <iostream>  // #include <cstdint>
#include <limits>
#include <vector>

using namespace std;

int main()
{
    int N;
    int t;
    int counter = 0;
    int64_t average_temp = 0;
    vector<int> temp;
    vector<int> new_temp;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> t;
        temp.push_back(t);
        average_temp += t;
    }
    average_temp = average_temp / N;
    for (size_t i = 0; i < temp.size(); i++) {
        if (temp[i] > average_temp) {
            new_temp.push_back(i);
            counter++;
        }
    }
    cout << counter << endl;
    for (size_t i = 0; i < new_temp.size(); ++i) {
        cout << new_temp[i] << " ";
    }


    return 0;
}
