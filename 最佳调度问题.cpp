//������n��������k���ɲ��й����Ļ�����ɡ��������i��Ҫ��ʱ��Ϊti�������һ���㷨�ҳ������n���������ѵ��ȣ�ʹ�����ȫ�������ʱ�����硣
//���������������n��k���Լ��������i��Ҫ��ʱ��Ϊti��i = 1~n����̼��������n���������ѵ��ȡ�
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int cmp(int a, int b)
//{
//	return a > b;
//}
//
//void smart_search(int no_work, int timeUsed, int timeUsedByMachine[], int *minTime, int timeCost[], int k, int n)
//{
//	if (timeUsed >= * minTime) return; // �ص㣺���ڵ��ڲ��Ǵ��ڣ�����Ѿ��õ�ʱ�������Сʱ�䣬���Ÿù�����һ��������Сʱ�䣬Ҫ��֦��
//	if (no_work >= n)
//	{   // exit
//		if (timeUsed < *minTime)
//			*minTime = timeUsed;
//		return;
//	}
//
//	for (int i = 0; i < k; ++i)
//	{
//		 �ѵ�ǰ�������Ÿ� ���Ÿù������ܹ���ʱ����Ȼ��������Сʱ��� ����
//		int m = timeUsedByMachine[i] + timeCost[no_work];
//		if (m <= *minTime)
//		{
//			timeUsedByMachine[i] = m;
//			smart_search(no_work + 1, max(timeUsed, timeUsedByMachine[i]), timeUsedByMachine, minTime, timeCost, k, n);
//			 max�Ľ��ͣ����timeUsed�󣬴�������Ѿ������֮ǰ�������ڵ�������񣬻�����תһ��ʱ�䣻��֮Ϊ����Ȼ�����
//			timeUsedByMachine[i] -= timeCost[no_work];
//		}
//	}
//}
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int timeCost[100];
//	for (int i = 0; i < n; ++i)
//		cin >> timeCost[i];
//	sort(timeCost, timeCost + n, cmp);
//
//	int machineTime[100];
//	for (int i = 0; i < k; ++i)
//	{
//		machineTime[i] = 0;
//	}
//	int minTime = 100000;
//
//	smart_search(0, 0, machineTime, &minTime, timeCost, k, n);
//	cout << minTime << endl;
//	return 0;
//}
