#include<iostream>
#include<string.h>
using namespace std;
//ctrl+d 删除一行 Ctrl+e 复制一行到下一行 ctrl+m相当于回车

//判断一个句子中有多少个字母 
void test1() {
	char s[1000];//使用char[]来存储英文句子
	cout<<"输入英文句子："<<endl;
//	cin>>s;不能跳过空白处,遇到空白就自动停止扫描了
	gets(s);//可以跳过空白处计数 
	int i,count=0,m;
	for(i=0;s[i]!=0;i++)
	{m=s[i];
	if(m>'a'&&m<'z'||m>'A'&&m<'Z')
	count++;
	}
	cout<<"该英文句子共有的字母数为:"<<count<<endl;
}
//大小写转换 
void test2() 
{
	char s1[100];
	cout<<"输入含有大小写的字母:";
	gets(s1);
	for(int i=0;i<100;i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
			s1[i]=s1[i]-32;//s1[i]=s1[i]-('a'-'A') 小写变大写
			//大写变小写  c+=32;c=c+('a'-'A')
		}
	 } 
	 cout<<s1<<endl;
}
//统计一个英文单词中指定字母出现的次数 之出现最多的字母和这 个字母出现的次数。
//主要思想:计数问题可以用两次循环.第一个循环是以第一个字母为基准,向第二个是遍历后面的数是向后去查找相同的数
void test3()
{
	string s2;
	int num,max=0;
	cout<<"输入的单词为:";
	cin>>s2;
	for(int i=0;i<s2.length();i++)
	{ int count=1;
		for(int j=i+1;j<s2.length();j++)
		{
			if(s2[j]==s2[i])count++;
		}
		if(count>max||(count==max&&s2[i]<s2[num]))
		{
			max=count;
			num=i;
		}
	}
	cout<<s2[num]<<endl<<max<<endl; 
	
}
void test4()
{
		char s3[100];
		cout<<"请输入一个字符串:";
		gets(s3);
		for(int i=0;i<100;i++)
		{
			if(s3[i]>='A'&&s3[i]<'Z')
			{
				s3[i]=s3[i]+'a'-'A';
			}
			if(s3[i]=='Z')
			{
				s3[i]='a';
			}
			if(s3[i]>='a'&&s3[i]<'z')
			{
				s3[i]=s3[i]-31;
			}
				if(s3[i]=='z')
			{
				s3[i]='A';
			}
		}
		cout<<"转换后的字符串为:"<<s3;
int main() {
	test1();
	test2();
    test3();
    test4();

	return 0;
}
//#include<iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	/*查找*/
//	string str1 = "abcdefghef";
//	int pos = str1.find("ef",0);//从第0个位置开始查找，返回这个字符串第一次出现的位置
//
//	if (pos == -1)//如果未找到返回-1
//	{
//		cout << "字符串未找到" << endl;
//	}
//	else
//	{
//		cout << "字符串出现的位置是：" << pos << endl;
//	}
//
//
//	//find和rfind的区别：find是从左往右找，rfind是右往左找，返回的都是下标
//	pos = str1.rfind("ef");
//	if (pos == -1)//如果未找到返回-1
//	{
//		cout << "字符串未找到" << endl;
//	}
//	else
//	{
//		cout << "字符串出现的位置是：" << pos << endl;
//	}
//
//
//
//	/*替换*/
//	string str2 = "abcdef";
//
//	str2.replace(1, 3, "1111");//从1号位置起3个字符替换为1111
//
//	cout << str2 << endl;//输出结果为：a1111ef
//
//
//	return 0;
//
//}



