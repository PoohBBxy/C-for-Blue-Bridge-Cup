//
//  main.cpp
//  String
//
//  Created by Pooh.Bear on 2024/10/27.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 声明并初始化一个空字符串
    string str1;
    
    // 使用字符串字面量初始化字符串
    string str2 = "hello world";
    
    // 使用另一个string对象来初始化字符串
    string str3 = str2;
    
    // 使用部分字符串初始化字符串:substr(起始位置，长度（若忽略，直接到字符串末尾）)
    string str4 = str2.substr(0,2);
    
    // 使用字符数组初始化字符串
    const char *charArray = "hello";
    string str5(charArray);
    
    // 使用重复的字符初始化字符串
    string str6(5, 'A');
    
    cout << "str1:" << str1 << endl;
    cout << "str2:" << str2 << endl;
    cout << "str3:" << str3 << endl;
    cout << "str4:" << str4 << endl;
    cout << "str5:" << str5 << endl;
    cout << "str6:" << str6 << endl;
    
    return 0;
}
