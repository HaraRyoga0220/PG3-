#include <stdio.h>


template <typename T>
class MinFinder {
public:
    // 2‚Â‚Ìˆø”‚ğ”ä‚×¬‚³‚¢’l‚ğ•Ô‚·
    T Min(T a, T b) {
        return (a < b) ? a : b;
    }
};

int main() {
    // floatŒ^‚Ì‘g‚İ‡‚í‚¹
    MinFinder<float> floatMinFinder;
    float floatResult = floatMinFinder.Min(3.14f, 2.71f);
    printf("Min: 3.14 or 2.71 <float>: %f\n", floatResult);

    // doubleŒ^‚Ì‘g‚İ‡‚í‚¹
    MinFinder<double> doubleMinFinder;
    double doubleResult = doubleMinFinder.Min(10.5, 8.9);
    printf("Min: 10.5 or 8.9 <double>: %lf\n", doubleResult);

    // intŒ^‚ÆdoubleŒ^
    MinFinder<int> intDoubleMinFinder;
    int intDoubleResult = intDoubleMinFinder.Min(5, 8.9);
    printf("Min: 5 or 8.9 <int>: %d\n", intDoubleResult);

    // intŒ^‚ÆfloatŒ^
    MinFinder<int> intFloatMinFinder;
    int intFloatResult = intFloatMinFinder.Min(5, 2.71f);
    printf("Min: 5 or 2.71 <int>: %d\n", intFloatResult);

    // floatŒ^‚ÆdoubleŒ^
    MinFinder<float> floatDoubleMinFinder;
    float floatDoubleResult = floatDoubleMinFinder.Min(3.14f, 8.9);
    printf("Min: 3.14 or 8.9 <float>: %f\n", floatDoubleResult);

    return 0;
}