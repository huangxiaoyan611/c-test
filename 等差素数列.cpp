#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int sushu(int x)//�������ж� 
{
	for(int i=2;i<x;i++)//��2��ʼ 
	{
	if(x%i==0)
	return 0;}
	return 1;
}
int main()
{
	int num,d,count;//��count=10ʱ���ӹ���=1��ʼ����Ѱ����С���� 
//��ʼö����������
	for(int i=2;i<50000;i++)//ö������
{		if(sushu(i))//�����������ʹӵ�ǰ��ʼ 
		{//��1��ʼö�ٹ��� 
			for(int d=1;d<1000;d++)
			{//���� 
				for(int j=1;j<1000;j++)
				{//�ܹ��ҵ����������Ȳ����еĴ��� 
					num=i+d*j;//��һ�����ڶ�����������N��an=a1+(n-1)d 
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
////�ж��Ƿ�������
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
//// �ж��Ƿ�Ϊ����
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
//{ //����cnt��0~9
//  int cnt = 0;
//  for(int i=2;i<10000;i++)
//  {//ö������i
//    if(check(i))
//    {
//      for(int j=1;j<1000;j++)
//      {//ö�ٹ���
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
