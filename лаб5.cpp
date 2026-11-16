#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double A, B;
    
    cout << "¬вед≥ть д≥йсне число A: ";
    cin >> A;
    cout << "¬вед≥ть д≥йсне число B (B < A): ";
    cin >> B;

    int A_c = (int)A;
    int B_c = (int)B;
    int result_c = A_c % B_c;

    int A_cpp = static_cast<int>(A);
    int B_cpp = static_cast<int>(B);
    int result_cpp = A_cpp % B_cpp;

    cout << "\n--- –езультати ---" << endl;
    cout << "–езультат (C): " << result_c << endl;
    cout << "–езультат (C++): " << result_cpp << endl;

    return 0;
}