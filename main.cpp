#include <stdio.h>


template <typename T>
class MinFinder {
public:
    // 2つの引数を比べ小さい値を返す
    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() {
    // float型の組み合わせ
    MinFinder<float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.14f, 2.71f);
    printf("Min: 3.14 or 2.71 <float>: %f\n", floatResult);

    // double型の組み合わせ
    MinFinder<double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(10.5, 8.9);
    printf("Min: 10.5 or 8.9 <double>: %lf\n", doubleResult);

    // int型とdouble型
    MinFinder<int> intDoubleMinFinder;
    int intDoubleResult = intDoubleMinFinder.Min(5, 8.9);
    printf("Min: 5 or 8.9 <int>: %d\n", intDoubleResult);

    // int型とfloat型
    MinFinder<int> intFloatMinFinder;
    int intFloatResult = intFloatMinFinder.Min(5, 2.71f);
    printf("Min: 5 or 2.71 <int>: %d\n", intFloatResult);

    // float型とdouble型
    MinFinder<float> floatDoubleMinFinder;
    float floatDoubleResult = floatDoubleMinFinder.Min(3.14f, 8.9);
    printf("Min: 3.14 or 8.9 <float>: %f\n", floatDoubleResult);

    return 0;
}