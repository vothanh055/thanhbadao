#include<iostream>
using namespace std;
#include<string> // thu vi?n h? tr? các hàm thao tác chu?i string
#include<string.h>
int main()
{
	string str;
	cout << "\nNhap chuoi: ";
	getline(cin, str); // nh?n kí t? kho?ng tr?ng
//	cout << "\nChuoi nhan duoc la: " << str;
//	cout << "\nDo dai chuoi: " << str.length(); 

//	string s1 = "lap";
//	string s2 = "trinh";
//	cout << s1 + " " + s2;
//	string s3 = s1 + ' ' + s2;
//	cout << s3;
//	stricmp((char *)s1.c_str(),(char *) s2.c_str());
//	// hàm c._str(): hàm chuy?n chu?i string sang chu?i ký t?
//	for (int i = 0; i < s1.length(); i++)
//	{
//		cout << s1[i] << endl;
//	}

//	string str;
//	cout << "\nNhap chuoi: ";
//	getline(cin, str);
//	cout << "\nChuoi nhan duoc la:" << str;
////	cout << "\nDo dai chuoi : " << str.length();
//	return 0;
//	}
	
//	str.erase(2, 3);
//	cout<<"\nchuoi sau khi xoa"<<str;
//	cout<<"do dai sau khi xoa " <<str.length();
//	str.erase(str.begin()+3);
//	cout<<"chuoi sau khi xoa" <<str;
//	cout<<"\ndo dai sau khi xoa"<< str.length();
//	return 0;
//str.push_back('t');
//cout<<"\nchuoi sau khi them: " << str;
//str.insert(2,"lap trinh");
//cout<<"\nchuoi sau khi them " <<str;
str.insert(str.begin()+2,'y');
cout<<"chuoi sau khi them"<<str;
}
	

