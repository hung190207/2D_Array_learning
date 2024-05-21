#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    int max_main_dia;
    int min_main_dia;
    int max_sec_dia;
    int min_sec_dia;
    ifstream fi;
    ofstream fo;
    fi.open("bai2.inp");
    fo.open("bai2.out");
    fi >> r >> c;
    int *arr = (int*)calloc(r*c,sizeof(int));
    for(int y = 0; y <r; y++)
    {
        for(int x = 0; x <c; x++)
        {
            int i = c * y +x;
            fi >> arr[i];
        }
    }
    for(int y = 0; y < r; y++)
    {
        for(int x = 0; x<c; x++)
        {
            int i = c*y+x;
            if(x == y)
            {
                if(max_main_dia < arr[i])
                {
                    max_main_dia = arr[i];
                }
            }
        }
    }
    for(int y = 0; y < r; y++)
    {
        for(int x = 0; x<c; x++)
        {
            int i = c*y+x;
            if(x == y)
            {
                if(min_main_dia > arr[i])
                {
                    min_main_dia = arr[i];
                }
            }
        }
    }
    for(int y = 0; y<r; y++)
    {
        for(int x = 0; x<c; x++)
        {
            int i = c*y+x;
            if(x == c-1-y)
            {
                if(max_sec_dia < arr[i])
                {
                    max_sec_dia = arr[i];
                }
            }
        }
    }
    for(int y = 0; y<r; y++)
    {
        for(int x = 0; x<c; x++)
        {
            int i = c*y+x;
            if(x == c-1-y)
            {
                if(min_sec_dia > arr[i])
                {
                    min_sec_dia = arr[i];
                }
            }
        }
    }
    free(arr);
    fo << "Max duong cheo chinh la: " << max_main_dia << endl << "Min duong cheo chinh la: " << min_main_dia << endl << "Max duong cheo phu: " << max_sec_dia << endl << "Min duong cheo phu: " << min_sec_dia;
    fi.close();
    fo.close();
}
