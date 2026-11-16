#include <iostream>

using namespace std;

int main() {
    double A, B;
    
    cout << "Введіть дійсне число A: ";
    cin >> A;
    cout << "Введіть дійсне число B (B < A): ";
    cin >> B;

    int A_c = (int)A;
    int B_c = (int)B;
    int result_c = A_c % B_c;

    int A_cpp = static_cast<int>(A);
    int B_cpp = static_cast<int>(B);
    int result_cpp = A_cpp % B_cpp;

    cout << "\n--- Результати ---" << endl;
    cout << "Результат (C): " << result_c << endl;
    cout << "Результат (C++): " << result_cpp << endl;

    return 0;
}