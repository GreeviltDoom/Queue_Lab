#include <iostream>
#include <queue> 
#include "TQueue.h"

using namespace std;

int main() 
{
    setlocale(0, "rus");
    queue <int> q; 

    cout << "Введите 7 чисел: " << endl;

    for (int h = 0; h < 7; h++) 
    {
        int a;

        cin >> a;

        q.push(a);  // добавляем в очередь элементы
    }

    cout << endl;
    cout << "Первый элемент в очереди: " << q.front() << endl;  // выводим первый
                                                                     // элемент очереди
    q.pop();  // удаляем элемент из очереди

    cout << "Новый первый элемент (после удаления): " << q.front() << endl;

    if (!q.empty()) cout << "Очередь не пуста!";  // проверяем пуста ли очередь

    system("pause");
    return 0;
}