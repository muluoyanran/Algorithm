////�̵���ÿ����Ʒ���б�ۡ����磬һ�仨�ļ۸���2Ԫ��һ����ƿ�ļ۸���5 Ԫ��Ϊ�������˿ͣ��̵��ṩ��һ���Ż���Ʒ�ۡ��Ż���Ʒ�ǰ�һ�ֻ������Ʒ�ֳ�һ�飬���������ۡ����磬3�仨�ļ۸���6Ԫ����5Ԫ��2 ����ƿ��1 �仨���Żݼ���10 Ԫ�������һ���㷨�������ĳһ�˿�������ƷӦ�������ٷ��á�
////
////���ڸ���������Ʒ�ļ۸���������Լ��Ż���Ʒ�ۣ���̼���������ƷӦ�������ٷ��á�
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int B;            // ������Ʒ������
//	int C[5];         // ��Ʒ����
//	int K[5] = { 0 }; // ���������Ʒ����
//	int P[5];         // ����Ʒ��������
//	int Code[1000];   // ���ڹ淶����Ʒ����
//
//	cin >> B;
//	if (B == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	for (int i = 0; i < B; ++i)
//	{
//		cin >> C[i] >> K[i] >> P[i];
//		Code[C[i]] = i;
//	}
//
//	int S;                          // �Ż���Ʒ�����
//	cin >> S;
//	int J[100];                     // ĳһ�Ż��������Ʒ��������
//	int discounts[100][1000][2];    // discount[i][j][0]������i���Ż�����е�j����Ʒ��id��1����������
//	int SPrice[100];                // ��i�������Ʒ�ļ۸�
//	for (int i = 0; i < S; ++i)
//	{
//		cin >> J[i];
//		for (int ii = 0; ii < J[i]; ++ii)
//		{
//			cin >> discounts[i][ii][0] >> discounts[i][ii][1];
//			discounts[i][ii][0] = Code[discounts[i][ii][0]];
//		}
//		cin >> SPrice[i];
//	}
//
//	int goods[5];        // goods[i]��ʾ��i����Ʒ�ĸ���
//	int fgoods[5];       // fgoods[i]��ʾ�ڵ���ʽ��goods[i]��ȥ��Ӧ�����������ֵ
//	int curPrice = 0;    // ��ʾһ����goods�����µĵ�ǰ��
//	int minPrice = 1000; // ��ʾһ����goods�����µ���С�ۣ����浽KP��
//
//	int KP[6][6][6][6][6] = { 0 };
//	// KP[goods[0]][goods[1]][goods[2]][goods[3]][goods[4]]��ʾ��������Ʒ����ĸ�����Ӧ����ͼ۸�
//
//	/******************************************
//	�ݹ鹫ʽ��
//	����ÿһ�������Ʒ�������������Ʒ�����ֱ�Ϊ��[a,b,c,d,e]������Ϊ0������
//	KP[g0][g1][g2][g3][g4] = min{ KP[g0-a][g1-b][g2-c][g3-d][g4-e] + discountPrice, (pay for each) }
//	Ҳ����˵����ÿ�������Ʒ�������������������Ž�Ϊȥ������Ϻ�����Ž���ϸ���ϵļ۸�
//	******************************************/
//
//	// I ���㵥��ļ۸�
//	for (goods[0] = 0; goods[0] <= K[0]; ++goods[0])
//	for (goods[1] = 0; goods[1] <= K[1]; ++goods[1])
//	for (goods[2] = 0; goods[2] <= K[2]; ++goods[2])
//	for (goods[3] = 0; goods[3] <= K[3]; ++goods[3])
//	for (goods[4] = 0; goods[4] <= K[4]; ++goods[4])
//	{
//		KP[goods[0]][goods[1]][goods[2]][goods[3]][goods[4]] =
//			goods[0] * P[0] +
//			goods[1] * P[1] +
//			goods[2] * P[2] +
//			goods[3] * P[3] +
//			goods[4] * P[4];
//	}
//
//	// II �����Żݵļ۸�
//	for (goods[0] = 0; goods[0] <= K[0]; ++goods[0])
//	for (goods[1] = 0; goods[1] <= K[1]; ++goods[1])
//	for (goods[2] = 0; goods[2] <= K[2]; ++goods[2])
//	for (goods[3] = 0; goods[3] <= K[3]; ++goods[3])
//	for (goods[4] = 0; goods[4] <= K[4]; ++goods[4])
//	{
//		/* ����ÿһ����Ʒ������� */
//		minPrice = KP[goods[0]][goods[1]][goods[2]][goods[3]][goods[4]];
//		for (int i = 0; i < S; ++i)
//		{   /* ���ڵ�i���Ż� */
//
//			// 1. ����������Ϣ����
//			for (int j = 0; j < 5; ++j)
//				fgoods[j] = goods[j]; 
//
//			// 2. �жϵ�i���Ż��ܲ����ã�˳�����fgoods
//			bool canUse = true;
//			for (int j = 0; j < J[i]; ++j)
//			{
//				// ��Ӧ��goods����ȥ�Ż�����а���������
//				fgoods[discounts[i][j][0]] = goods[discounts[i][j][0]] - discounts[i][j][1];
//				if (fgoods[discounts[i][j][0]] < 0)
//				{
//					canUse = false;
//					break;
//				}
//			}
//			if (!canUse)
//				continue;
//
//			// 3. ����ʹ�õ�ǰ�۸���ļ۸񣬸�����Сֵ
//			for (int j = 0; j < J[i]; ++j)
//			{
//				curPrice = KP[fgoods[0]][fgoods[1]][fgoods[2]][fgoods[3]][fgoods[4]] + SPrice[i];
//				if (curPrice < minPrice) minPrice = curPrice;
//			}
//
//			// 4. ����KP
//			KP[goods[0]][goods[1]][goods[2]][goods[3]][goods[4]] = minPrice;
//		}
//	}
//
//	// III ������
//	cout << KP[K[0]][K[1]][K[2]][K[3]][K[4]] << endl;
//	return 0;
//}
