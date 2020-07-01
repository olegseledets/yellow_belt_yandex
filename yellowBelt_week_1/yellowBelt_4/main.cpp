#include <iostream>
#include <vector>

using namespace std;

int main()
{
    size_t N = 0, // Количество блоков
        R = 0,      // Плотность каждого блока
        W = 0,
        H = 0,
        D = 0,
        M = 0,      // масса блока
        sum_m = 0;  // сумма масс блоков

    cin >> N >> R;
    for (int i = 0; i < N; i++) {
        cin >> W >> H >> D;
        M = W * H * D;
        sum_m += M * R;
    }
    cout << sum_m;

    return 0;
}
