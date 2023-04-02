#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int sushu(int x)//素数的判断 
{
	for(int i=2;i<x;i++)//从2开始 
	{
	if(x%i==0)
	return 0;}
	return 1;
}
int main()
{
	int num,d,count;//当count=10时，从公差=1开始遍历寻找最小公差 
//开始枚举素数首项
	for(int i=2;i<50000;i++)//枚举首项
{		if(sushu(i))//若是素数，就从当前开始 
		{//从1开始枚举公差 
			for(int d=1;d<1000;d++)
			{//公差 
				for(int j=1;j<1000;j++)
				{//能够找到连续素数等差数列的次数 
					num=i+d*j;//第一个，第二个，，，第N个an=a1+(n-1)d 
					if(sushu(num))
					count++;
					else 
					{count=1;
					break;}
					if(count==10)
					cout<<d;
				}
			}
		}
}
  return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//
////判断是否是素数
//
//int f(int x){
//    for(int i=2;i<x;i++){
//        if(x%i==0)
//        return 0;
//    }
//    return 1;
//} 
//
//#include <iostream>
//using namespace std;
//// 判断是否为素数
//bool check(int n)
//{
//  for(int i=2;i<n;i++){
//    if(n%i==0)
//      return false;
//  }
//  return true;
//}
//
//int main()
//{ //长度cnt：0~9
//  int cnt = 0;
//  for(int i=2;i<10000;i++)
//  {//枚举首项i
//    if(check(i))
//    {
//      for(int j=1;j<1000;j++)
//      {//枚举公差
//        while(check(i+cnt*j))
//        {
//          cnt++;
//          if(cnt==9)
//          {
//            cout<<j;
//            return 0;
//          }
//        }
//        cnt=0;
//      }
//    }
//  }
//  return 0;
//         
//}
