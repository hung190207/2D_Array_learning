#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    int result = 0;
    int result1 = 0;
    ifstream fi;
    ofstream fo;
    fi.open("bai1.inp");
    fo.open("bai1.out");
    fi >> r >> c;
    int *arr = (int*)calloc(r*c,sizeof(int));
    for(int y = 0;y <r;y++){
        for(int x = 0;x <c;x++){
            int i = c * y +x;
            fi >> arr[i];
        }
    }
    for(int y = 0;y < r;y++){
        for(int x = 0;x<c;x++){
            int i = c*y+x;
            if(x == y){
                result += arr[i];
            }
        }
    }
    for(int y = 0;y<r;y++){
        for(int x = 0;x<c;x++){
            int i = c*y+x;
            if(x == c-1-y){
                result1 += arr[i];
            }
        }
    }
    free(arr);
    fo << "Tong duong cheo chinh la: " << result << endl << "Tong duong cheo phu la: " << result1;
    fi.close();
    fo.close();
}
