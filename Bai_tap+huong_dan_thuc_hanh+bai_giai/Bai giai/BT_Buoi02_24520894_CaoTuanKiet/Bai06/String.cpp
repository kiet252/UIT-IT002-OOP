// MSSV: 24520894
// Ho ten: Cao Tuan Kiet
// Ngay sinh: 06/08/2006
// Lop: IT002.P26

#include "String.h"

String::String() {
	str = nullptr;
}

String::String(char* s) {
	if (s == nullptr) str = nullptr;
	else {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
}

//copy constructor, su dung truong hop gan object String nay voi object String khac
//viec gan thong thuong giua hai object String se gan pointer str cua object String nay bang pointer cua object string khac
//vi vay giua cac object String se share chung mot dia chi - hay con goi la shallow copy
//giai phap: su dung deep copy, bang cach su dung copy constructor, cho phep copy va tao ra object co con tro rieng biet va tro den chung 1 dia chi voi con tro goc
//Nguon: https://theironns.blogspot.com/2015/12/shallow-copy-va-deep-copy.html
String::String(const String& other) {
	if (other.str == nullptr) {
		str = nullptr;
	} else {
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
	}
}

//copy assignment constructor, co cung cong dung voi copy constructor
//dam bao thay the du lieu cua object cu bang du lieu cua object moi
//Nguon: https://cppdeveloper.com/c-nang-cao/copying-constructor-va-assignment-constructor/

String& String::operator= (const String& other) {
	if (this == &other) return *this;
	if (str != nullptr) delete[] str;
	if (other.str == nullptr) str = nullptr;
	else {
		str = new char[strlen(other.str) + 1];
		strcpy(str, other.str);
	}
	return *this;
}

String:: ~String() {
	if (str != nullptr) {
		delete[] str;
		str = nullptr;
	}
}

char* String::getCharPtr() {
	return str;
}

size_t String::len() {
	return strlen(str);
}

String String::noi(String str2) {
	size_t len1 = (str == nullptr ? 0 : strlen(str));
	size_t len2 = (str2.str == nullptr ? 0 : strlen(str2.str));
	char* newStr = new char[len1 + len2 + 1];
	newStr[0] = '\0';
	if (str != nullptr) {
		strcpy(newStr, str);
	}
	if (str2.str != nullptr) {
		strcat(newStr, str2.str);
	}
	String daNoi(newStr);
	delete[] newStr;
	return daNoi;
}

String String::reverse() {
	if (str == nullptr) return String();
	size_t length = strlen(str);
	char* newStr = new char[length + 1];
	for (size_t i = 0; i < length; i++) {
		newStr[i] = str[length - 1 - i];
	}
	newStr[length] = '\0';
	return String(newStr);
}

void String::toUpper() {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] <= 'z' && str[i] >= 'a') str[i] -= 32;
	}
}

void String::toLower() {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] <= 'Z' && str[i] >= 'A') str[i] += 32;
	}
}

void String::nhap() {
	//luc nhap ban dau ta khong biet do dai cua xau ki tu duoc nhap la bao nhieu
	//vi vay mang "char buffer[1024]" dung de luu tam gia tri cua xau ban dau
	//sau khi luu tam gia tri vao mang buffer, ta se biet duoc do dai cua xau
	//sau do cap phat dong mot xau co do dai dung bang xau
	char buffer[1024];
	cout << "Nhap xau ki tu: ";
	cin.getline(buffer, sizeof(buffer));
	//giai phong vung nho cho xau cu
	if (str != nullptr) {
		delete[] str;
	}
	str = new char[strlen(buffer) + 1];
	strcpy(str, buffer);
}

void String::xuat() {
	cout << "Xau ki tu: " << str << endl;
}

