#include <iostream>
#include <cstdlib> //for a random value, there is a function int rand(void).
using namespace std;
#define SIZE 4
#define MIN 0
#define MAX 25

template <typename T>
class Matrix
{
    private:
        T matrix[SIZE][SIZE];
    public:
        Matrix()
        {
            for (int row = 0; row < SIZE; row++)
            {
                for (int column = 0; column < SIZE; column++)
                {
                    matrix[row][column] = 0;
                }
            }
            cout << "\nMatrix object has been created";
        }
        ~Matrix()
        {
            cout << "\nMatrix object has been destroyed";
        }

        friend istream& operator >> (istream& input, Matrix& a)
        {
            T temp;
            for (int row = 0; row < SIZE; row++)
                {
                    for (int column = 0; column < SIZE; column++)
                    {
                        cin >> temp;
                        if (temp > MAX || temp < MIN)
                        {
                            //Range is 0 to Max+1-1 which is Max itself.
                            a.matrix[row][column] = rand() % (MAX+1);
                            cout << '\n' << temp << " is not in the interval [0,25], so it is changed to " << a.matrix[row][column];
                        }
                        else
                        {
                            a.matrix[row][column] = temp;
                        }
                    }
                }
            return input;
        }

        friend ostream& operator << (ostream& output, Matrix& a)
        {
            for (int row = 0; row < SIZE; row++)
            {
                cout << '\n';
                for(int column = 0; column < SIZE; column++)
                {
                    cout << a.matrix[row][column] << ' ';
                }
            }
            return output;
        }

        friend Matrix operator + (Matrix& a, Matrix& b)
        {
            Matrix result;
            for (int row = 0; row < SIZE; row++)
            {
                for (int column = 0; column < SIZE; column++)
                {
                    result.matrix[row][column] = a.matrix[row][column] + b.matrix[row][column];
                }
            }
            return result;
        }

        friend Matrix operator - (Matrix& a, Matrix& b)
        {
            Matrix result;
            for (int row = 0; row < SIZE; row++)
            {
                for (int column = 0; column < SIZE; column++)
                {
                    result.matrix[row][column] = a.matrix[row][column] - b.matrix[row][column];
                }
            }
            return result;
        }

        friend bool Check_Quattro(Matrix& a)
        {
            if ( (a.matrix[0][0]== a.matrix[0][1]+ a.matrix[1][0]+ a.matrix[1][1]) &&
            (a.matrix[SIZE-1][0]== a.matrix[SIZE-2][0]+ a.matrix[SIZE-1][1]+ a.matrix[SIZE-2][1]) &&
            (a.matrix[0][SIZE-1]== a.matrix[0][SIZE-2]+ a.matrix[1][SIZE-2]+ a.matrix[1][SIZE-1]) &&
            (a.matrix[SIZE-1][SIZE-1]== a.matrix[SIZE-1][SIZE-2]+a.matrix[SIZE-2][SIZE-2]+a.matrix[SIZE-2][SIZE-1]))
            return true;

            return false;
        }
};

int main()
{
    Matrix<double> matrix1, matrix2;
    cout << "\nEnter the values for the first matrix: ";
    cin >> matrix1;
    cout << "\nEnter the values for the second matrix: ";
    cin >> matrix2;

    char process;  Matrix<double> result_matrix;
    cout << "\nEnter the operation: "; cin >> process;
    if (process == '+')
    {
        //Constructor and then Destructor will be called
        //Since the assignment operator is not defined especially for the object
        result_matrix = matrix1 + matrix2;
        cout << result_matrix;
    }
    else if (process == '-')
    {
        //Same
        result_matrix = matrix1 - matrix2;
        cout << result_matrix;
    }
    else
    {
        cout <<"\n Wrong operation";
        return -1;
    }

    if (Check_Quattro(result_matrix))
    {
        cout << "\nThe resultant matrix is a Quattro Matrix";
    }
    return 0;
}
