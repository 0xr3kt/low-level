#include <stdio.h>

void function1(){ // junior code
    float math1, english1, average1, total1, sum1;

    math1 = 8.00; english1 = 8.00;

    sum1 = math1 + english1;
    total1 = sum1;
    average1 = total1 / 2;

    printf("result: %f\n", average1);
}

void function2(){ // senior code
    float math2 = 10.00, english2 = 8.00;
    float average2 = (math2 + english2) / 2;

    printf("result: %f\n", average2);
}

int main(){
    function1();
    function2();
    return 0;
}
