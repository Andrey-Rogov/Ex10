// Copyright 2020 Andrey Rogov

#include <iostream>
#include "MyStack.h"
#include "Stack09/postfix.h"

int main() {
    std::string s1("2 + 6 * 3 / (4 - 2)");
    std::string s2 = infix2prefix(s1);
    std::cout << s2;

    return 0;
}

