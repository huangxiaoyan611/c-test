#include<iostream>
#include<string.h>
using namespace std;
//ctrl+d ɾ��һ�� Ctrl+e ����һ�е���һ�� ctrl+m�൱�ڻس�

//�ж�һ���������ж��ٸ���ĸ 
void test1() {
	char s[1000];//ʹ��char[]���洢Ӣ�ľ���
	cout<<"����Ӣ�ľ��ӣ�"<<endl;
//	cin>>s;���������հ״�,�����հ׾��Զ�ֹͣɨ����
	gets(s);//���������հ״����� 
	int i,count=0,m;
	for(i=0;s[i]!=0;i++)
	{m=s[i];
	if(m>'a'&&m<'z'||m>'A'&&m<'Z')
	count++;
	}
	cout<<"��Ӣ�ľ��ӹ��е���ĸ��Ϊ:"<<count<<endl;
}
//��Сдת�� 
void test2() 
{
	char s1[100];
	cout<<"���뺬�д�Сд����ĸ:";
	gets(s1);
	for(int i=0;i<100;i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
		{
			s1[i]=s1[i]-32;//s1[i]=s1[i]-('a'-'A') Сд���д
			//��д��Сд  c+=32;c=c+('a'-'A')
		}
	 } 
	 cout<<s1<<endl;
}
//ͳ��һ��Ӣ�ĵ�����ָ����ĸ���ֵĴ��� ֮����������ĸ���� ����ĸ���ֵĴ�����
//��Ҫ˼��:�����������������ѭ��.��һ��ѭ�����Ե�һ����ĸΪ��׼,��ڶ����Ǳ���������������ȥ������ͬ����
void test3()
{
	string s2;
	int num,max=0;
	cout<<"����ĵ���Ϊ:";
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
		cout<<"������һ���ַ���:";
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
		cout<<"ת������ַ���Ϊ:"<<s3;
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
//	/*����*/
//	string str1 = "abcdefghef";
//	int pos = str1.find("ef",0);//�ӵ�0��λ�ÿ�ʼ���ң���������ַ�����һ�γ��ֵ�λ��
//
//	if (pos == -1)//���δ�ҵ�����-1
//	{
//		cout << "�ַ���δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ַ������ֵ�λ���ǣ�" << pos << endl;
//	}
//
//
//	//find��rfind������find�Ǵ��������ң�rfind���������ң����صĶ����±�
//	pos = str1.rfind("ef");
//	if (pos == -1)//���δ�ҵ�����-1
//	{
//		cout << "�ַ���δ�ҵ�" << endl;
//	}
//	else
//	{
//		cout << "�ַ������ֵ�λ���ǣ�" << pos << endl;
//	}
//
//
//
//	/*�滻*/
//	string str2 = "abcdef";
//
//	str2.replace(1, 3, "1111");//��1��λ����3���ַ��滻Ϊ1111
//
//	cout << str2 << endl;//������Ϊ��a1111ef
//
//
//	return 0;
//
//}



