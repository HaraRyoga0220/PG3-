#include <stdio.h>


template <typename T1, typename T2>
class MinFinder {
public:
    // 2Ç¬ÇÃà¯êîÇî‰Ç◊ÅAè¨Ç≥Ç¢ílÇï‘Ç∑
    auto Min(T1 a, T2 b) -> decltype(a < b ? a : b) {
        return (a < b) ? a : b;
    }
};


int main() {
    // floatå^ÇÃëgÇ›çáÇÌÇπ
    MinFinder<float,float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.14f, 2.71f);
    printf("Min: 3.14 or 2.71 <float>: %f\n", floatResult);

    // doubleå^ÇÃëgÇ›çáÇÌÇπ
    MinFinder<double,double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(10.5, 8.9);
    printf("Min: 10.5 or 8.9 <double>: %lf\n", doubleResult);

    // intå^Ç∆doubleå^
    MinFinder<int,double> intDoubleMinFinder;
    int intDoubleResult = intDoubleMinFinder.Min(5, 8.9);
    printf("Min: 5 or 8.9 <int>: %d\n", intDoubleResult);

    // intå^Ç∆floatå^
    MinFinder<int,float> intFloatMinFinder;
    int intFloatResult = intFloatMinFinder.Min(5, 2.71f);
    printf("Min: 5 or 2.71 <int>: %d\n", intFloatResult);

    // floatå^Ç∆doubleå^
    MinFinder<float,double> floatDoubleMinFinder;
    float floatDoubleResult = floatDoubleMinFinder.Min(3.14f, 8.9);
    printf("Min: 3.14 or 8.9 <float>: %f\n", floatDoubleResult);

    return 0;
}