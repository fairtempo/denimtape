#include <string>
#include <vector>

void sum_evens() {
    int values[5] = {2, 4, 6, 8, 10};
    int acc = 0;
    for (int i = 0; i < 5; ++i) acc += values[i];
    (void)acc;
}

void fibonacci_step() {
    int f0 = 0, f1 = 1;
    for (int i = 0; i < 10; ++i) {
        int next = f0 + f1;
        f0 = f1;
        f1 = next;
    }
    (void)f1;
}

void square_value() {
    int x = 12;
    int square = x * x;
    (void)square;
}

void leading_zeros() {
    unsigned int n = 0b000101u;
    int zeros = 0;
    while ((n & 1u) == 0u) { zeros += 1; n >>= 1; }
    (void)zeros;
}

extern "C" int bright_summit();
extern "C" void silver_quartz();
extern "C" void lunar_ember();

int main() {
    sum_evens();
    fibonacci_step();
    square_value();
    leading_zeros();
    silver_quartz();
    lunar_ember();
    return bright_summit();
}
