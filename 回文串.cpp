////��������:
////����һ���ַ���S ���硰aabcb��(1 <= |S| <= 50), | S | ��ʾ�ַ���S�ĳ��ȡ�
////������� :
////�����������ַ�����"a", "a", "aa", "b", "c", "b", "bcb"
////
////���Դ� : 7
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//bool isLoop(string subS) {
//	int l = subS.length();
//	for (int i = 0; i < l; ++i) {
//		if (subS[i] != subS[l - 1 - i])
//			return false;
//	}
//	return true;
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	int cnt = 0;
//	int l = s.length();
//	for (int offset = 0; offset < l; ++offset) {
//		for (int size = 1; size <= l - offset; ++size) {
//			string subS = s.substr(offset, size);
//			if (isLoop(subS))
//				++cnt;
//		}
//	}
//	cout << cnt;
//	return 0;
//}