#include<iostream>
#include<string.h>
using namespace std;
void test1()
{
	char dst[128]="";
	char src[]="hello\0world";
	strcpy(dst,src);
	cout<<dst<<endl;
	char dst1[128]="";//dest1 ����ֻ��1�ֽڣ���src1������dest�л����������ڴ���Ⱦ�� 
	char src1[]="helloworld";
	strcpy(dst1,src1);
	cout<<dst1<<endl;//hello world��Ⱦ�ڴ� 
	cout<<"���ַ����ĳ���Ϊ��"<<strlen(src1)<<endl;
}
void test2()
{
	char sdt[128]="hello";
	char src2[]="world1";
	strcat(sdt,src2);//��world׷�ӵ�hello worldβ�� 
	cout<<sdt<<endl;
//	cout<<sdt+src2<<endl;
}
void test3()
{
	char s1[10];
	char s2[10];
	cout<<"�����һ���ַ�����";
cin>>s1;
	cout<<"�����һ���ַ�����";
	cin>>s2;
	if(strcmp(s1,s2)>0)//���������ַ�����һ��һ�����бȽϵģ������һ����ĸ��ͬ����Ƚϵڶ������Դ����ƣ� 
	{//���ڶ�������ͬ�����ĸ���ĸ���ĸ��ַ����ʹ�ͬʱ�Ƚϳ�����֮�󣬾Ͳ����ټ������½��бȽ� 
		cout<<s1<<"����"<<s2<<endl;
	}
	else if(strcmp(s1,s2)<0)
	{
		cout<<s2<<"����"<<s1<<endl;
	}
	else if (strcmp(s1,s2)==0)
	{
			cout<<s1<<"����"<<s1<<endl;
	}
 } 
int main()
{
test1();
test2();
test3();
	return 0;
}
