//有人表示 20200202 是 “千年一遇” 的特殊日子。对此小明很不认同，因为不到 2 年之后就是下一个回文日期：20211202 即 2021 年 12 月 2 日。
//也有人表示 20200202 并不仅仅是一个回文日期，还是一个 ABABBABA 型的回文日期。对此小明也不认同，因为大约 100 年后就能遇到下一个 ABABBABA 型的回文日期：21211212 即 2121 年 12 月 12 日。算不上 “千年一遇”，顶多算 “千年两遇”。
//给定一个 8 位数的日期，请你计算该日期之后下一个回文日期和下一个 ABABBABA的格式。 
//1，判断【是否回文】。这个也简单，把数的所有位上的数通过商余运算取出来，定义a~h，8个字母分别存放 个、十、百、千、万等八个位的数。然后分别比较是否相等。
//2，判断是回文数之后，再判断该数的【年月日是否合法】，于是再定义一个check函数检查日期是否合法，把年月日作为参数传进去，年月日也是通过商余运算取出来，判断日期是否合法。
//这里还要注意平闰年的问题。在外面写一个判断闰年的leap函数，在check函数里对平闰年分别讨论。
#include <iostream>
using namespace std;
bool isleap(int y) {//判断闰年
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);//闰年可以被4整除但不能被100整除，或能被400整除。
}
bool check(int year, int mouth, int day) {//判断日期是否合法
    if (mouth > 12 || mouth == 0)return false;
    if (day > 31)return false;
    if (mouth == 2) {
        if (isleap(year) && day > 29)
            return false;
        if (!isleap(year) && day > 28)
            return false;
    }
    if (mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11)
        if (day > 30)return false;
    return true;
}
int main()
{
    int n, i;
    cin >> n;
    int a, b, c, d, e, f, g, h;
    int year, mouth, day;
    bool flag = false;
    for (i = n + 1;i <= 99999999;++i) {
        year = i / 10000;
        mouth = i % 10000 / 100;
        day = i % 100;
        a = i % 10;//得到个位
        b = i / 10 % 10;//十位
        c = i / 100 % 10;//百位
        d = i / 1000 % 10;//千位
        e = i / 10000 % 10;//万位
        f = i / 100000 % 10;//十万位
        g = i / 1000000 % 10;//百万位
        h = i / 10000000 % 10;//千万位
        if (a == h && c == f && b == g && e == d && flag == false) {//该部分目的是输出第一个回文日期，flag作为标记。
        //当找到第一个回文日期之后，将flag变为ture。这样下一次碰到普通回文日期时就不会输出。
            if (check(year, mouth, day)) {
                cout << i << endl;
                flag = true;
            }
        }
        if (a == h && c == f && b == g && e == d && a == c && b == e) {//输出ABABBABA型的回文日期
            if (check(year, mouth, day)) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
