//
//  main.cpp
//  StrCompare
//
//  Created by Pooh.Bear on 2024/10/27.
//  其实还有个更优解：> < =
//  比较规则：字典序大小
//  何为字典序的比较方法？从小到大一个一个比较，一旦遇到不相等的字符就确定大小关系。
//  e.g: aaaa < bbbb azz < baaa azzzzzzzzzzzzzzz < b lanqiao == lanqiao


#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1 = "hello";
    string str2 = "World";
    int result = str1.compare(str2);
    if (result == 0)
        cout << "Strings is equal" << endl;
    else if (result < 0)
        cout << "String 1 is less than String 2" << endl;
    else
        cout << "String1 is greater than String 2" << endl;
    
    return 0;
}
