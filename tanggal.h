/**
    KELAS     : IF 39-06
    KELOMPOK  : 2
    NAMA(NIM) : [Amin][1301154398] , [Alfin Pratama S][1301154342] , [Hafizh][1301154272] , [Bella][1301154637]
**/


#ifndef TANGGAL_H_INCLUDED
#define TANGGAL_H_INCLUDED

#include <string>
#include <iostream>
using namespace std;

struct tanggal
{
    //=================================================
    // YOUR CODE STARTS HERE
    int tgl, bln, thn;

    // YOUR CODE ENDS HERE
    //=================================================
};

tanggal create_tanggal(int dd,int mm,int yy);
bool cek_tanggal(tanggal tgl);
void show_tanggal(tanggal tgl);
void edit_tanggal(tanggal &tgl, int dd, int mm, int yy);
int selisih_hari(tanggal tgl1, tanggal tgl2);

#endif // TANGGAL_H_INCLUDED
