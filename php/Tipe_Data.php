<?php 
$nim = "A";
$nama = "Gerald Dwight Andigha Cardinsyh";
$umur = 18;
$nilai = 100;
$status = TRUE;

echo "----Belajar Tipe Data----<br><br>";
echo "Tipe data Char : " . $nim . "<br>";
echo "Tipe data String : " . $nama . "<br>";
print "Tipe Data Int : " . $umur;
print "<br>";
printf("Tipe Data Float :  %.5<br><br>", $nilai);
echo "Tipe Data Boolean : <br><br>";
if($status)
    echo "Status : Aktif ";
else
    echo "Status : Tidak Aktif";
