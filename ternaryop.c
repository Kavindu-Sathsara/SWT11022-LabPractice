#include <Stdio.h>
int main(){
    int value =6;
    char result = (value % 2== 0)? 'E' : 'o';
    printf ("value is %c (E: Even, O: odd)\n",result);

    return 0;
    }
