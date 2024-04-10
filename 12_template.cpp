#include <iostream>
using namespace std;

const int SIZE = 3; // Good practice to use descriptive and uppercase names for constants

template <class T>
class Vector
{
    T *v; // Pointer to an array of type T

public:
    // Default constructor
    Vector()
    {
        v = new T[SIZE]; // Allocate memory for SIZE elements of type T
        for (int i = 0; i < SIZE; i++)
        {
            v[i] = 0; // Initialize each element to 0
        }
    }

    // Constructor that takes an array of type T
    Vector(T *a)
    {
        v = new T[SIZE]; // Allocate memory for SIZE elements of type T
        for (int i = 0; i < SIZE; i++)
        {
            v[i] = a[i]; // Copy each element from the input array
        }
    }
    // Dot product operation
    T operator*(Vector &y)
    {
        T sum = 0;
        for (int i = 0; i < SIZE; i++)
        {
            sum += this->v[i] * y.v[i]; // Calculate the dot product
        }
        return sum;
    }
};

int main()
{
    int x[3] = {1, 2, 3};
    int y[3] = {4, 5, 6};

    Vector<int> v1(x); // Create vector v1
    Vector<int> v2(y); // Create vector v2

    int R = v1 * v2; // Calculates the dot product of v1 and v2

    cout << "R = " << R; // Output the result

    return 0;
}
