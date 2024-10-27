//
//  main.cpp
//  c_str
//
//  Created by Pooh.Bear on 2024/10/27.
//  c_str()的功能: str -> char[]

#include <bits/stdc++.h>
using namespace std;

int main() {
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    char buf[100]; // 临时变量，用于输入
    scanf("%s", buf);
    string str(buf);
    printf("str = %s\n", str.c_str()); // 输出str
    
    return 0;
}
