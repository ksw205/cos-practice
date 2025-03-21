#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int first, second, sum;

    if (argc != 3) {
        printf("invalid");
        printf("1");
    } 
    first = atoi(argv[1]);
    second = atoi(argv[2]);

    if (first < second) {
        sum = 0;
        while (first <= second)
        {
            sum += first; 
            first++;
        }
        printf("sum: %d\n", sum);
    } 
    else {
        printf("invalid");}
    return 0;
}