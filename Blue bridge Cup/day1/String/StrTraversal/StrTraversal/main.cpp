//
//  main.cpp
//  StrTraversal
//
//  Created by Pooh.Bear on 2024/10/27.
//  常用的遍历string遍历方法有两种：1）循环枚举下标 2） auto枚举（其中&表示取引用类型，如果修改会改变原来的值）

#include <bits/stdc++.h>
using namespace std;


int main() {
    string s = "hello";
    for(int i = 0; i < s.length(); ++i)
        cout << s[i];
    cout << endl;
    for (auto i : s){
        cout << i;
        // 此处的修改无效因为i是拷贝出来的，而不是引用s的。
        i = 'a';
    }
    cout << endl;
    // 此时s = "hello"
    for (auto &i : s){
        cout << i;
        // 此处的修改会修改s的字符值。
        i = 'a';
    }
    cout << endl;
    cout << s << '\n';
    return 0;
}
