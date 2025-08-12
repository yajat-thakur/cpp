#include <iostream>
using namespace std;

class Element {
public:
    int i;
    int j;
    int x;
};

class Sparse {
private:
    int m;          // Rows of the sparse matrix
    int n;          // Columns of the sparse matrix
    int num;        // Number of non-zero elements
    Element* data;  // Array to store non-zero elements

public:
    Sparse(int m, int n, int num) {
        this->m = m;
        this->n = n;
        this->num = num;
        data = new Element[this->num];
    }

    ~Sparse() {
        delete [] data;
    }

    void read() {
        for (int i = 0; i < num; i++) {
            cout << "Enter row, column, and value for element " << i + 1 << ": ";
            cin >> data[i].i >> data[i].j >> data[i].x;
        }
    }

    void display() {
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (data[k].i == i && data[k].j == j) {
                    cout << data[k].x << " ";
                } else {
                    cout << "0 ";
                }
            }
            cout << endl; // Move this line outside the inner loop
        }
    }
};

int main() {
    Sparse s(3, 3, 3);
    s.read();
    s.display();
    return 0;
}
// index starts from 0th row AND col. so in output write the row and col. by assuming the first row and col. are 0th position...