//
// Created by houmeng on 17-10-20.
//

#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    int a[3] = {3,4,5};
    int *p = &a[0];
    cout << *p << endl;
    return 0;
}
