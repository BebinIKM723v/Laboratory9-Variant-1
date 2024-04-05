#include <iostream>
#include <stdlib.h>

using namespace std;

const int rows = 5;
const int cols = 5;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    double matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    double maxElement = matrix[0][0];
    int maxRow = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxRow = i;
            }
        }
    }

    cout << "Номер рядка з макс елементом: " << maxRow << endl;

    double sum = 0;
    int count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j += 2) {
            sum += matrix[i][j];
            count++;
        }
    }

    double average = sum / count;

    cout << "Середнє арифметичне елементiв у парних стовпцях: " << average << endl;

    return 0;
}
