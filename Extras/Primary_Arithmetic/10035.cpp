#include <iostream>
#include <string>

using namespace std;

int main(){

    unsigned int A, B;
    int count, a, b;
    bool carry;

    while (scanf("%u %u", &A, &B) != EOF){
        carry = false;
        count = 0;
        
        if (A == 0 && B == 0){break;}
        if (B > A){
            int temp = A;
            A = B;
            B = temp;
        }

        while (A > 0){
            a = A % 10;
            //cout << a << endl;
            b = B % 10;
            //cout << b << endl;
            A = A / 10;
            //cout << A << endl;
            B = B / 10;
            //cout << B << endl;

            if (carry){
                if (a + b + 1 >= 10){
                    count++;
                    carry = true;
                    //cout <<"carry\n";
                }else if(a + b + 1 < 10){
                    carry = false;
                    //cout <<"no carry\n";
                    }
            }else{
                if (a + b >= 10){
                    count++;
                    carry = true;
                    //cout <<"carry\n";
                }else if (a + b < 10){
                    carry = false;
                    //cout <<"no carry\n";
                    }
            }
        }

        if(count == 0){
            printf("No carry operation.\n");
        }else if(count == 1){
            printf("1 carry operation.\n");
        }else{
            printf("%d carry operations.\n", count);
        }
    }
}
    