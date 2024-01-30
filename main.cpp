#include <stdio.h>


template <typename T1, typename T2>
class MinFinder {
public:
    // 2�̈������ׁA�������l��Ԃ�
    auto Min(T1 a, T2 b) -> decltype(a < b ? a : b) {
        return (a < b) ? a : b;
    }
};


int main() {
    // float�^�̑g�ݍ��킹
    MinFinder<float,float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.14f, 2.71f);
    printf("Min: 3.14 or 2.71 <float>: %f\n", floatResult);

    // double�^�̑g�ݍ��킹
    MinFinder<double,double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(10.5, 8.9);
    printf("Min: 10.5 or 8.9 <double>: %lf\n", doubleResult);

    // int�^��double�^
    MinFinder<int,double> intDoubleMinFinder;
    int intDoubleResult = intDoubleMinFinder.Min(5, 8.9);
    printf("Min: 5 or 8.9 <int>: %d\n", intDoubleResult);

    // int�^��float�^
    MinFinder<int,float> intFloatMinFinder;
    int intFloatResult = intFloatMinFinder.Min(5, 2.71f);
    printf("Min: 5 or 2.71 <int>: %d\n", intFloatResult);

    // float�^��double�^
    MinFinder<float,double> floatDoubleMinFinder;
    float floatDoubleResult = floatDoubleMinFinder.Min(3.14f, 8.9);
    printf("Min: 3.14 or 8.9 <float>: %f\n", floatDoubleResult);

    return 0;
}