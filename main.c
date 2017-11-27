//
//  main.c
//  ArrayPointer
//
//  Created by Eun Jae Lee on 27/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a[] = {1,2,3,4,5};
    int *p[3];// 0,1,2
    
    int i; // for loop
    
    for (i=0; i<3; i++)
        p[i] = &a[i]; // store address in array
    
    for (i=0; i<3; i++) // print haxa addresses
        printf("%p\n",p[i]);
    
    for (i=0; i<3; i++) // print value
        printf("%d\n",*p[i]);
    

    getchar();
    
}
