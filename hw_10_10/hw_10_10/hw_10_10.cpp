#include <iostream>
using namespace std;

//1. Разворот числа.
//Дано число n, десятичная запись которого не содержит нулей.Получите число, записанное теми же цифрами, но в противоположном порядке.При решении этой задачи нельзя использовать циклы, строки, списки, массивы, разрешается только рекурсия и целочисленная арифметика.Функция должна возвращать целое число, являющееся результатом работы программы, выводить число по одной цифре нельзя.
//Ввод: 179
//Вывод : 971

//2. Степень числа.
//Вычислить степень числа, используя рекурсию.В функцию передаётся 2 параметра - число и степень.

//3. Сумма чисел в диапазоне.
//Вычислить сумму чисел в определённом диапазоне.Начало и конец диапазона задаётся параметрами функции.

int reverse(int f, int reverse_num)
{
    if (f == 0)
    {
        return reverse_num;
    }
    else
    {
        int last_digit = f % 10;
        int new_reverse_num = reverse_num * 10 + last_digit;

        return reverse(f / 10, new_reverse_num);
    }
}

int reverse(int f)
{
    return reverse(f, 0);
}

int degree(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else
    {
        return degree(a, b - 1) * a;
    }
}

int sum(int n, int e)
{
    if (e == n)
    {
        return n;
    }
    else
    {
        return sum(n, e - 1) + e;
    }
}

int main()
{
    cout << "reverse: " << reverse(2341) << "\n\n";
    
    cout << "degree: " << degree(5, 3) << "\n\n";

    cout << "sum: " << sum(1, 15) << "\n\n";

}
