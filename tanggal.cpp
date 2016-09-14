/**
    KELAS     :
    KELOMPOK  :
    NAMA(NIM) : [nama][nim] , [nama][nim] , [nama][nim] , [nama][nim]
**/

#include <string>
#include <ctime>
#include <stdio.h>
#include "tanggal.h"

tanggal create_tanggal(int dd,int mm,int yy)
{
    /**
    * fungsi mengeset tanggal tgl dengan hari, bulan, dan tahun dan mengembalikan hasilnya
    **/

    tanggal tgl;
    //=================================================
    // YOUR CODE STARTS HERE
    tgl.dd = tgl;
    tgl.mm = bln;
    tgl.yy = thn;
    // YOUR CODE ENDS HERE
    //=================================================
    return tgl;
}

bool cek_tanggal(tanggal tgl)
{
    /**
    * fungsi mengecek tanggal
    * fungsi mengembalikan nilai true jika isi tanggal sesuai dengan bulannya
    * fungsi mengembalikan nilai false jika isi tanggal atau bulan atau tahun salah
    **/
    bool ok = true;
    int jml_dd;
    //=================================================
    // YOUR CODE STARTS HERE
    if (tgl.mm == 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        jml_dd = 31;
    }
    else if (tgl.mm == 4 || 6 || 9 || 11)
    {
        jml_dd = 30;
    }
    else if (tgl.mm == 2)
    {
        if ((tgl.yy % 4 == 0) && (tgl.yy % 100 == 0))
        {
            jml_dd = 29;
        }
        else
        {
            jml_dd = 28;
        }
    }

    if (tgl.dd <= 31 )
    {
        ok = true;
    }
    else
    {
        ok = false;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return ok;
}

void show_tanggal(tanggal tgl)
{
    /**
    * fungsi menampilkan tanggal bulan tahun dengan format menampilkan nama bulan
    * contoh : 1 Januari 1980
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    switch (tgl.mm)
    {
    case 1 : "Januari"
        ;
        break;
    case 2 : "Februari"
        ;
        break;
    case 3 : "Maret"
        ;
        break;
    case 4 : "April"
        ;
        break;
    case 5 : "Mei"
        ;
        break;
    case 6 : "Juni"
        ;
        break;
    case 7 : "Juli"
        ;
        break;
    case 8 : "Agustus"
        ;
        break;
    case 9 : "September"
        ;
        break;
    case 10 : "Oktober"
        ;
        break;
    case 11 : "November"
        ;
        break;
    case 12 : "Desember"
        ;
        break;
    }
    cout << tgl.dd << " / " << tgl.mm << " / " << tgl.yy;
    // YOUR CODE ENDS HERE
    //=================================================
}

void edit_tanggal(tanggal &tgl, int dd, int mm, int yy)
{
    /**
    * fungsi mengubah isi tanggal dari variabel tgl
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    int x = 0;

    do
    {
        tgl.dd = 0 ;
        tgl.mm = 0 ;
        tgl.yy = 0 ;
    }
    while ( x != 0);

    cout << "Tanggal : ";
    cin >> tgl;
    cout << "Bulan: ";
    cin >> bln;
    cout << "Tahun: ";
    cin >> thn;

    tgl.dd=tgl;
    tgl.mm=bln;
    tgl.yy=thn;
    // YOUR CODE ENDS HERE
    //=================================================
}

int selisih_hari(tanggal tgl1, tanggal tgl2)
{
    /**
    * fungsi menghitung selisih hari dari variable tgl1 dan tgl2
    * fungsi selalu mengembalikan selisih dalam nilai positif
    * syarat tahun tgl1 dan tgl2 harus sama
    * jika tahun pada tgl1 berbeda dengan tgl2, maka fungsi mengembalikan nilai -1
    **/
    int selisih = -1;
    int hari,bulan;
    //=================================================
    // YOUR CODE STARTS HERE
    if {
        tgl.yy != thn
    }
    hari=abs((tgl1-tgl2))
    bulan=abs((bulan1-bulan2)*30);

    // YOUR CODE ENDS HERE
    //=================================================
    return selisih;

}
