#include <stdio.h>


int can_access_registry(int is_premium, int reputation, int has_2fa) {
    
    if (is_premium == 1) {
        return 1;
    }
    if (reputation >=100 && has_2fa) {
        return 1;
    }
    return 0;

}


int main(){
    int user_permissions = can_access_registry(0,99,0);
    printf("Verifying Joe's permissions....Joe:%d\n", user_permissions);
}
