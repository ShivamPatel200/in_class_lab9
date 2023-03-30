#include <iostream>
#include <memory>
#include "in_class_lab_nine.h"
using namespace std;

int main() {
    List lst1;

    lst1.push(1);
    lst1.push(2);
    lst1.push(3);
    lst1.push(4);
    lst1.push(5);

    for (auto i = lst1.head.get(); i != nullptr; i = i->next.get()) {
        cout << i->data << " ";
    }

    cout <<endl;
    return 0;
}