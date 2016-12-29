//============================================================================
// Name        : string.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class str
{
		char a[20];
		int l;
public:
		void getdata()
		{
			cout<<"\nenter the string: ";
			cin>>a;
		}
		int length()
		{
			int i=0;
			while(a[i]!='\0')
				i++;
			return i;
		}
		void display()
		{
			cout<<endl<<a<<endl;
		}
		void concat(str s)
		{
			int i=length();
			int j=s.length();
			for(int k=i;k<(i+j);k++)
			{
				a[k]=s.a[k-i];
			}
			a[i+j]='\0';
		}
		void copy(str s)
		{
			int i=s.length();
			for(int j=0;j<i;j++)
			{
				a[j]=s.a[j];
			}
			a[i]='\0';
		}
		void reverse()
		{
			int i=length();
			str s;
			for(int j=0;j<i;j++)
			{
				s.a[j]=a[i-j-1];
			}
			s.a[i]='\0';
			copy(s);
			//display();
		}
		void substring()
		{
			str w;
			int flag;
			cout<<"\nenter the substring\n";
			cin>>w.a;
			int i=length();
			int j=w.length();
			for(int k=0;k<i;k++)
			{
				flag=0;
				if(a[k]==w.a[0])
				{
					for(int u=0;u<j;u++)
					{
						if(a[k+u]==w.a[u])
						{
							flag=1;
						}
						else
						{
							flag=0;
							break;
						}
					}
				}
				if(flag==1)
				{
					cout<<"\n it is substring\n";
					break;
				}

			}
			if(flag==0)
				cout<<"it is not substring\n";
		}
		bool equal(str s)
		{
			int len1=length();
			int len2=s.length();
			if(len1!=len2)
				return false;
			int flag=0;
			for(int i=0;i<len1;i++)
			{
				if(a[i]!=s.a[i])
				{
					return false;
				}
			}
			return true;
		}
		int freq(char c)
		{
			int j=0;
			int len=length();
			for(int i=0;i<len;i++)
			{
				if(a[i]==c)
					j++;
			}
			return j;
		}
		str chardelete(char c)
		{
			str s;
			int cb=0;
			int len=length();
			for(int i=0;i<len;i++)
			{
				if(a[i]!=c)
					s.a[cb++]=a[i];
			}
			s.a[cb]='\0';
			return s;
		}
		str del(int start,int len)
		{
			int len1=length();
			str d;int cb=0;
			for(int i=0;i<len1;i++)
			{
				if(i<start||i>(start+len-1))

					d.a[cb++]=a[i];
			}
			d.a[cb]='\0';
			return d;
		}
		void palindrome()
		{
			int len=length();
			int flag=0;
			for(int i=0,j=len-1;i<j;i++,j--)
			{
				if(a[i]==a[j])
				{
					flag=1;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
				cout<<"\npalindrome";
			else
				cout<<"\nnot";
		}
		void replace(str s,str s1)
		{
			int len=length();
			int len2=s1.length();
			int len1=s.length();int flag=0;
			for(int i=0;i<len;i++)
			{
				cout<<a[i];
				flag=0;
				if(a[i]==s.a[0])
				{
					for(int u=0;u<len1;u++)
					{
						if(a[i+u]==s.a[u])
						{
							flag=1;
						}
						else
						{
							flag=0;
							break;
						}
					}
				}
				if(flag==1)
				{
					if(len1==len2)
					{
						for(int j=i;j<i+len1;j++)
						{
							a[j]=s1.a[j-len1];
						}
					}
					break;
				}
								
			}
cout<<a;


		}
};
int main() {
	str s,s1,s2;
	bool p;
	s.getdata();
	//s1.getdata();
	//s.copy(s1);
	//s.reverse();
	//s.substring();
	//p=s.equal(s1);
	/*if(p==true)
		cout<<"equal\n";
	else
		cout<<"not equal\n";*/
	/*cout<<"enter the character whose frequency is to be find out\n";;
	char c;
	cin>>c;*/
	//int i=s.freq(c);
	//cout<<endl<<i;
	//s1=s.del(1,0);
	//s.palindrome();
	s1.getdata();
	s2.getdata();
	s.replace(s1,s2);
	s.display();
	return 0;
}

