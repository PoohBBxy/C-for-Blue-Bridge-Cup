//
//  main.cpp
//  StrFind
//
//  Created by Pooh.Bear on 2024/10/27.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "hello,world!";
    // 查找子字符串的位置
    size_t pos = str.find("world");
    if (pos != string::npos){
        cout << "SubString found at postion:" << pos << endl;
    }
    else{
        cout << "SubString not found!" << endl;
    }
    
    return 0;
}
