//
//  main.cpp
//  StrAppend
//
//  Created by Pooh.Bear on 2024/10/27.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World!";
    
    string result1 = str1 + "," + str2;
    string result2 = str1.append(",").append(str2);
    
    cout << "Result 1:" << result1 << endl;
    cout << "Result 2:" << result2 << endl;
    
    return 0;
}
