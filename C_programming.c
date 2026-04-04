#include <stdio.h>
int main(){
    char callergender[] = "Male" ;
    char partnergender[] = "FeMale" ;
    int call_duration  = 5 ;
    int weekly_calls = 4 ;
    int result = call_duration > 5 && weekly_calls > 4 && ((partnergender[0] == 'M' && callergender[0] == 'F') || (partnergender[0] == 'F' && callergender[0] == 'M') ) ;
    if (result){
        printf("your partner cheating on you") ;
    }
    if (!result){
        printf("not cheating on you") ;
    }

    return 0 ;
}
