//
//  main.c
//  Table_of_Multiplication
//
//  Created by Yanzhe on 2022/7/16.
//

#include <stdio.h>

int main() {
    int row;
    for (row=1;row<=10;row=row+1)
    {
        int num1;
        for (num1=1; num1<=row; num1=num1+1)
        {
            printf("%d \t",num1*row);
        }
        printf("\n");
    }
    return 0;
}
