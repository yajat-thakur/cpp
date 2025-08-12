#include <iostream>
using namespace std;

class Ele {
public:
    int i; // Row index
    int j; // Column index
    int x; // Value
};

class Sparse {
private:
    int m;       // Number of rows
    int n;       // Number of columns
    int num;     // Number of non-zero elements
    Ele* Element; // Array of non-zero elements

public:
    Sparse(int m, int n, int num) {
        this->m = m;
        this->n = n;
        this->num = num;
        Element = new Ele[this->num]; // Corrected syntax
    }

    ~Sparse() {
        delete[] Element;
    }

    void read() {
        for (int i = 0; i < num; i++) {
            cout << "Enter row index, column index, and value for element " << i + 1 << ": ";
            cin >> Element[i].i >> Element[i].j >> Element[i].x;
        }
    }

    void display() {
        int k = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (Element[k].i == i && Element[k].j == j) {
                    cout << Element[k].x << " ";
                    //k++;
                } else {
                    cout << "0 ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Sparse s(2, 2, 2);
    s.read();
    s.display();
    return 0;
}
// index starts from 0th row AND col. so in output write the row and col. by assuming the first row and col. are 0th position...