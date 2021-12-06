#include <iostream>
#include <string>

using namespace std;

int main(){
    string a, b;
    int count;
    bool carry = false;
    int A, B;

    while(cin >> a >> b){
        count = 0;
        if(a == "0" && b == "0"){break;}
        if(a.length() < b.length()){
            for(int i = a.length(); i > 0; i--){
                A = int(a[i - 1]);
                B = int(b[i - 1]);
                if(carry){
                    if(A + B +1 > 9){
                        carry = true;
                        count++; 
                    }else{carry = false;}

                }else{
                    if(A + B > 9){
                        carry = true;
                        count++; 
                    }else{carry = false;}
                }
            }
        }else{
            for(int i = b.length(); i > 0; i--){
                A = int(a[i - 1]);
                B = int(b[i - 1]);
                if(carry){
                    if(A + B + 1 > 9){
                        carry = true;
                        count++; 
                    }else{carry = false;}

                }else{
                    if(A + B > 9){
                        carry = true;
                        count++; 
                    }else{carry = false;}
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
