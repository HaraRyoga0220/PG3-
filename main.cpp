#include <stdio.h>


template <typename T>
class MinFinder {
public:

    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() {
    // int型のインスタンス
    MinFinder<int> intMinFinder;
    int intResult = intMinFinder.Min(5, 10);
    printf("Min:5 or 10 <int>: %d\n", intResult);

    // float型のインスタンス
    MinFinder<float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.14f, 2.71f);
    printf("Min:3.14 or 2.71 <float>: %f\n", floatResult);

    // double型のインスタンス
    MinFinder<double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(10.5, 8.9);
    printf("Min:10.5 or 8.9 <double>: %lf\n", doubleResult);;

    return 0;
}