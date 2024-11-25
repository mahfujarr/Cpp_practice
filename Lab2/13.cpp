#include <iostream>
using namespace std;
int inputMatrix(int matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    return 0;
}
int printMatrix(int matrix[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int result[2][2], matrix1[2][2], matrix2[2][2];
    cout << "Enter elements of first 2x2 matrix:\n";
    inputMatrix(matrix1);
    cout << "\nThe first 2x2 matrix is:\n";
    printMatrix(matrix1);
    cout << "Enter elements of second 2x2 matrix:\n";
    inputMatrix(matrix2);
    cout << "\nThe second 2x2 matrix is:\n";
    printMatrix(matrix2);

    cout << "The addition of these two matrices is: \n"
         << matrix1[0][0] + matrix2[0][0] << " " << matrix1[0][1] + matrix2[0][1] << "\n"
         << matrix1[1][0] + matrix2[1][0] << " " << matrix1[1][1] + matrix2[1][1] << " ";

    cout << "\nThe subtraction of these two matrices is: \n"
         << matrix1[0][0] - matrix2[0][0] << " " << matrix1[0][1] - matrix2[0][1] << "\n"
         << matrix1[1][0] - matrix2[1][0] << " " << matrix1[1][1] - matrix2[1][1] << " ";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << endl
         << "The multiplication of these 2 matrices is: \n";
    printMatrix(result);
}