//
//  main.cpp
//  StrReplace
//
//  Created by Pooh.Bear on 2024/10/27.

//  str.replace(字符串起始位置, 被替换的子串长度, 替换的字符串)

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello World!";
    
    str.replace(6, 5, "Universe");
    cout << "Result: " << str << endl;
    
    return 0;
}
