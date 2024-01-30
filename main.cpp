#include <stdio.h>

template <typename T>
class MinFinder {
public:
    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() {
    // int�^�̃C���X�^���X
    MinFinder<int> intMinFinder;
    int intResult = intMinFinder.Min(5, 10);
    printf("Min: 5 or 10 <int>: %d\n", intResult);

    // float�^�̃C���X�^���X
    MinFinder<float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.14f, 2.71f);
    printf("Min: 3.14 or 2.71 <float>: %f\n", floatResult);

    // double�^�̃C���X�^���X
    MinFinder<double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(10.5, 8.9);
    printf("Min: 10.5 or 8.9 <double>: %lf\n", doubleResult);

    // int�^�̃C���X�^���X (�ēx)
    MinFinder<int> intMinFinder2;
    int intResult2 = intMinFinder2.Min(5, 10);
    printf("Min: 5 or 10 <int>: %d\n", intResult2);

    // float�^�̃C���X�^���X (�قȂ�l)
    MinFinder<float> floatMinFinder2;
    float floatResult2 = floatMinFinder2.Min(5, 10);
    printf("Min: 5 or 10 <int>: %f\n", floatResult2);

    // double�^�̃C���X�^���X (�قȂ�l)
    MinFinder<double> doubleMinFinder2;
    double doubleResult2 = doubleMinFinder2.Min(5, 10);
    printf("Min: 5 or 10 <int>: %lf\n", doubleResult2);

    return 0;
}