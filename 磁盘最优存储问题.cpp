////��Ŀ������
////����n ������{ 1,2,��, n }Ҫ����ڳ���ΪL�ĴŴ��ϡ�
////����i����ڴŴ��ϵĳ�����Li�� 1 <= i <= n��
////��n ������Ķ�ȡ���ʷֱ���p1, p2, ..., pn, ��pi + p2 + ... + pn = 1��
////�������n ������ i1, i2, ...., in �Ĵ����ţ�
////���ȡ����ir �����ʱ��
////tr = c * (Pi1 * Li1 + Pi2 * Li2 + ... + Pir * Lir)��
////��n �������ƽ����ȡ ʱ��Ϊt1 + t2 + ... + tn�� 
////�Ŵ����Ŵ洢����Ҫ��ȷ����n �������ڴŴ��ϵ�һ���洢����ʹƽ����ȡʱ��ﵽ ��С��
////�����һ�����������㷨, �������㷨����ȷ�Ժͼ��㸴���ԡ�
////�������
////���ڸ�����n���������ڴŴ��ϵĳ��ȺͶ�ȡ���ʣ���̼���n����������Ŵ洢�� ����
////���룺
////��һ����������n����ʾ�ļ���������������n���У� ÿ����2 ��������a ��b���ֱ��ʾ�������ڴŴ��ϵĳ��ȺͶ�ȡ���ʡ�ʵ���ϵ�k���� ��Ķ�ȡ����ak / (a1 + a2 + ... + an)��������������ٶ�c = 1��
////�����
////���һ��ʵ��������1λС������ʾ���������Сƽ����ȡʱ�䡣
//
////�㷨�����Ƕ̽������ȡ��Ÿ�������ˡ�
//#include <iostream>
//using namespace std;
//void normalize(int n, double p[]);
//void sort(double t[], int low, int high);
//
//int main()
//{
//	int n;
//	cin >> n;
//	double p[10005], l[10005];
//	for (int i = 0; i < n; ++i)
//		cin >> l[i] >> p[i];
//	normalize(n, p);
//
//	// ��p��ʾt, ����������
//	for (int i = 0; i < n; ++i)
//		p[i] = p[i] * l[i];
//	
//	sort(p, 0, n - 1);
//
//	double time = 0;
//	for (int i = 0; i < n; ++i)
//		time += p[i] * (n - i);
//
//	printf("%.1f\n", time);
//	return 0;
//}
//
//void normalize(int n, double p[])
//{
//	double sum = 0;
//	for (int i = 0; i < n; ++i)
//		sum += p[i];
//	for (int i = 0; i < n; ++i)
//		p[i] = p[i] / sum;
//}
//
//void sort(double t[], int low, int high)
//{
//	if (low >= high)
//		return;
//	
//	double s = t[low];
//	int i = low, j = high;
//	
//	while (i < j)
//	{
//		while (i < j && t[j] >= s) --j;
//		t[i] = t[j];
//		while (i < j && t[i] <= s) ++i;
//		t[j] = t[i];
//	}
//	t[i] = s;
//	
//	sort(t, low, i - 1);
//	sort(t, i + 1, high);
//}