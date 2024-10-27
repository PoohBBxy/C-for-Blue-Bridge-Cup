//
//  main.cpp
//  Blue bridge Cup
//
//  Created by 王浩天 on 2024/10/27.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
//    取消同步流 
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int x = 3;
    double d =3.14;
    char ch = 'a';
    char s[] = "hello";
    bool b = true;
    cout << x << '\n';
    cout << d << '\n';
    cout << ch << '\n';
    cout << s << '\n';
    cout << b << '\n';
    return 0;
}
