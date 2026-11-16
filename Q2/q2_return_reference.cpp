#include <iostream>

int& highestMark(int marks[], int size) {
    int best = 0;
    for (int i = 1; i < size; ++i) {
        if (marks[i] > marks[best]) best = i;
    }
    return marks[best];
}

// Deliberately unsafe demonstration: do not call or dereference this function.
// Compilers normally warn because the returned reference will dangle.
int& danglingReference() {
    int local = 42;
    return local;
}

const int& highestMarkReadOnly(const int marks[], int size) {
    int best = 0;
    for (int i = 1; i < size; ++i) {
        if (marks[i] > marks[best]) best = i;
    }
    return marks[best];
}

int highestMarkCopy(const int marks[], int size) {
    int best = 0;
    for (int i = 1; i < size; ++i) {
        if (marks[i] > marks[best]) best = i;
    }
    return marks[best];
}

int main() {
    int marks[] = {78, 91, 84, 88};
    int size = sizeof(marks) / sizeof(marks[0]);

    std::cout << "Highest before moderation: " << highestMark(marks, size) << '\n';
    highestMark(marks, size) += 2;
    std::cout << "Highest after moderation: " << highestMark(marks, size) << '\n';

    const int& readOnly = highestMarkReadOnly(marks, size);
    int copied = highestMarkCopy(marks, size);
    std::cout << "Read-only reference: " << readOnly << '\n';
    std::cout << "Returned copy: " << copied << '\n';
}
