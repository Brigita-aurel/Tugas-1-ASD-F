#include<stdio.h>
int main()
{
    //deklarasi variabel
    int A[10], i,j,k,tkr,top,bottom,middle,tm;
    //proses penginputan data
    for(i=0;i<10;i++)
    {
        printf("Data ke-%d:",i+1);
        scanf("%d",&A[i]);
    }
    printf("Masukkan data yang akan anda cari:");
    scanf("%d",&k);
    //proses pengurutan data

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if (A[i]>A[j])
            {
                tkr=A[i];
                A[i]=A[j];
                A[j]=tkr;
            }
        }
    }
    //proses pencarian data
    tm=0;
    top=9;
    bottom=0;
    while(top>=bottom)
    {
        middle=(top+bottom)/2;
        if(A[middle]==k)
        {
            tm++;
        }
        if(A[middle]<k)
        {
            bottom=middle+1;
        }
        else
        {
            top=middle-1;
        }
    }
    if (tm>0)
    {
      printf("Data %d yang dicari ada dalam array\n",k);
    }
    //jika tidak ditemukan
    else
    {
      printf("Data tidak ditemukan dalam array\n");

    }
getch();
return 1;
}
