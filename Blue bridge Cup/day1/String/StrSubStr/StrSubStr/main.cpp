//
//  main.cpp
//  StrSubStr
//
//  Created by Pooh.Bear on 2024/10/27.
//  substr 提取子字符串 第一个参数是起始位置，第二个参数是长度，注意一定不要越界！！！！！

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "hello world";
    string subStr = str.substr(6, 5);
    
    cout << "Substring:" << subStr << endl;
    
    return 0;
}
