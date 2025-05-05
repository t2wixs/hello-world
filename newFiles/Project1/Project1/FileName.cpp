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

	cout << "Время выполнения: " << duration << " секунд" << endl;
    cout << "Результат (для проверки): " << sum << endl;

    return 0;
}