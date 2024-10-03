#include <iostream>
int main ()

{
  int penghasilan, pajak, hasil_akhir;

printf ("Pajak Tahunan Penghasilan \n\n");
printf ("Masukkan nominal penghasilan Rp ");
scanf ("%d",&penghasilan);

//validasi
if (penghasilan < 0){
     printf("Nominal yang anda masukkan tidak sesuai ");
   }else{
     printf("pajak Rp ");
   }

if (penghasilan <= 5000000)
   {
hasil_akhir = penghasilan * 5 /100;
   }
else if (penghasilan <= 25000000)
   {
hasil_akhir = penghasilan * 15 /100;
   }
else if (penghasilan <= 50000000)
   {
hasil_akhir = penghasilan * 25 /100;
   }

printf ("Pajak Rp %d",hasil_akhir);
}
