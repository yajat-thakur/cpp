#include <iostream>
#include <string>

using namespace std;

class Sagar {
public:
    int age;
    string gf;

    // Constructor
    Sagar(int age, string gf) {
        this->age = age; // Use 'this->' to refer to the class member
        this->gf = gf;   // Use 'this->' to refer to the class member
    }

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Sagar p(20, "Ria");
    p.display();

    return 0; // Successful execution
}
