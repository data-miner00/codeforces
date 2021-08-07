#include "solution263A.h"
#include <iostream>
#include <cstdlib>

void setup() {
    for (int i = 0; i < 5; i++) {
        int a,b,c,d,e, horizontalOffset, verticalOffset;
        std::cin >> a >> b >> c >> d >> e;

        if (a == 1 || b == 1 || c == 1 || d == 1 || e == 1) {
            verticalOffset = abs(i - 2);
            if (a == 1) horizontalOffset = 2;
            else if(b == 1) horizontalOffset = 1;
            else if(c== 1)horizontalOffset = 0;
            else if (d==1) horizontalOffset = 1;
            else horizontalOffset = 2;
            std::cout << horizontalOffset + verticalOffset;
            break;
        }
    }
}