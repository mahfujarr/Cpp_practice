#include <iostream>
using namespace std;

class Matrix
{
private:
    int mat[2][2];

public:
    Matrix(int a, int b, int c, int d)
    {
        mat[0][0] = a;
        mat[0][1] = b;
        mat[1][0] = c;
        mat[1][1] = d;
    }

    void display() const
    {
        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(const Matrix &other)
    {
        return Matrix(mat[0][0] + other.mat[0][0], mat[0][1] + other.mat[0][1],
                      mat[1][0] + other.mat[1][0], mat[1][1] + other.mat[1][1]);
    }
};

int main()
{
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);
    Matrix result = m1 + m2;
    result.display();
    return 0;
}
