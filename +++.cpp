#include<iostream>
int main()
{
    int *p,**q;
    int a = 5;
    //p = &a;
    //q = &p;
    q = &a;
    std::cout << **q << std::endl;
    getchar();
    getchar();
    return 0;

}