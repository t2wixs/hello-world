/*
#include <iostream>
#include <ctime> 
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
	clock_t start = clock();

	double sum = 0;
    for (long long i = 1; i <= 100000000; ++i) 
    {
        sum += log(i);
    }

	clock_t end = clock();
	double duration = (double)(end - start) / CLOCKS_PER_SEC;

	cout << "����� ����������: " << duration << " ������" << endl;
    cout << "��������� (��� ��������): " << sum << endl;

    return 0;
}
*/

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int main() 
{
    setlocale(0, "");
    time_t start, end;

    time(&start);

    double sum = 0.0;
    for (long long i = 1; i <= 100'000'000; ++i) 
    {
        sum += log(i);
    }
    cout << "��������� ����������: " << sum << endl;

    time(&end);

    double seconds = difftime(end, start);

    cout << "����� ����������: " << seconds << " ������" << endl;

    return 0;
}   