//	如果一个字符串 SS 恰好可以由某个字符串重复 KK 次得到，我们就称 SS 是 KK 次重复字符串。
//例如 abcabcabc 可以看作是 abc 重复 33 次得到，所以 abcabcabc 是 33 次重复字符串。
//同理 aaaaaa 既是 22 次重复字符串、又是 33 次重复字符串和 66 次重复字符串。
//现在给定一个字符串 SS，请你计算最少要修改其中几个字符，可以使 SS 变为一个 KK 次字符串？
//输入描述
//输入第一行包含一个整数 KK。
//第二行包含一个只含小写字母的字符串 SS。
//其中，1 ≤ K ≤ 10^5, 1 ≤ |S| ≤ 10^51≤K≤10 
//5
// ,1≤∣S∣≤10 
//5
// 。其中 |S|∣S∣ 表示 SS 的 长度。
//
//输出描述
//输出一个整数代表答案。如果 SS 无法修改成 KK 次重复字符串，输出 ?1?1。
#include <iostream>
#include <cstring>
using namespace std;
string s;
int cnt[30];//统计 小写字母出现的次数 
int k;
int main()
{
  // 请在此输入您的代码
  cin >> k >> s;
  int len = s.size();
  if(len % k != 0) {
    puts("-1");
    return 0;
  }
  int solen = len / k;
   int res = 0;
//  //贪心：每组字符串含有solen个字母，我们去所有组第i个字母，保留出现次数最多的那个其他的全改，
//最终修改的次数是最小的
  for(int i = 0; i < solen; i ++) {//初始化哈希表 
    memset(cnt, 0, sizeof cnt);//记录出现次数最多的字母 
    int maxv = -1;  // 枚举每个字串i这个位置的出现最多的字母，然后k-maxv即为最少的修改次数,这正是贪心思维
    for(int j = i; j < len; j += solen) {
      cnt[s[j] - 'a'] ++;
      maxv = max(maxv, cnt[s[j] - 'a']);
    }
    res += k - maxv;
  }
  cout << res << endl;
  return 0;
}
