#include<iostream>
#include<string.h>
using namespace std;
void test1()
{
	char dst[128]="";
	char src[]="hello\0world";
	strcpy(dst,src);
	cout<<dst<<endl;
	char dst1[128]="";//dest1 数组只有1字节，当src1拷贝到dest中会造成溢出（内存污染） 
	char src1[]="helloworld";
	strcpy(dst1,src1);
	cout<<dst1<<endl;//hello world污染内存 
	cout<<"该字符串的长度为："<<strlen(src1)<<endl;
}
void test2()
{
	char sdt[128]="hello";
	char src2[]="world1";
	strcat(sdt,src2);//将world追加到hello world尾部 
	cout<<sdt<<endl;
//	cout<<sdt+src2<<endl;
}
void test3()
{
	char s1[10];
	char s2[10];
	cout<<"输入第一个字符串：";
cin>>s1;
	cout<<"输入第一个字符串：";
	cin>>s2;
	if(strcmp(s1,s2)>0)//其中两个字符串是一个一个进行比较的，如果第一个字母相同，则比较第二个，以此类推； 
	{//若第二个不相同，则哪个字母大哪个字符串就大，同时比较出来了之后，就不会再继续向下进行比较 
		cout<<s1<<"大于"<<s2<<endl;
	}
	else if(strcmp(s1,s2)<0)
	{
		cout<<s2<<"大于"<<s1<<endl;
	}
	else if (strcmp(s1,s2)==0)
	{
			cout<<s1<<"等于"<<s1<<endl;
	}
 } 
int main()
{
test1();
test2();
test3();
	return 0;
}
