#include <stdio.h>
#include <math.h>

int main(){
    int a=3+4*6;
    printf("%d\n",a);

    int x=3*5/4*6;
    printf("%d\n",x);
    
    return 0;
}

/*
precedence-priority order such as in maths we have defined BODMAS for priority order assignment just like that we have defined Operator precedence.
High priority means High precedence 
as well
Low priority means low precedence

*,/,% (First prioirty)
   |
+,- (second precedence)
   |
   =(Assignment operator as last precedence)     
*/

/*Associativity (for same precedence)
Left to Right

x=4*3/6*2
*/

