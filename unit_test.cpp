#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "in_class_lab_nine.h"
#include "doctest.h"
using namespace std;

TEST_CASE("Testing functions") {
    SUBCASE("struct testing"){
        List lst1;

        lst1.push(1);
        lst1.push(2);
        lst1.push(3);
        lst1.push(4);
        lst1.push(5);

        vector<int> values = {5, 4, 3, 2, 1};

        auto temp = lst1.head.get();
        int counter = 0;
        
        while (temp != nullptr) {
            CHECK(temp->data == values[counter]);
            temp = temp->next.get();
            counter++;
        }

    }
}