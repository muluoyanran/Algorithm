////СQ�õ�һ�����������: 1, 12, 123, ...12345678910, 1234567891011...��
////����СQ�����ܷ�3����������ʺܸ���Ȥ��
////СQ����ϣ�����ܰ�������һ�´����еĵ�l������r��(�����˵�)�ж��ٸ������Ա�3������
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	long l, r;
//	cin >> l >> r;
//
//	int offset = 0;
//	switch (l % 3)
//	{
//	case 1:l += 2; offset = 2; break;
//	case 2:l += 1; offset = 2; break;
//	default:offset = 1; break;
//	}
//	r -= l;
//	long full = r / 3 * 2;
//	switch (r % 3)
//	{
//	case 1:case 2:full += r % 3 - 1;
//	default:break;
//	}
//	cout << full + offset;
//}