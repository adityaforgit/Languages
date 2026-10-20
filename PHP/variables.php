<?php
/* PHP variable scope:
1. Local varialble 
2. Global variable
3. Static variable*/


//Local variable
$num = 100;
function localvar() {
    $num = 150;
    echo "Variable num inside is: $num \n";
}
localvar();
echo "$num \n";

//Global variable
global $num;
echo $num,"\n";

//Static variable
function staticvar() {
   static $num = 4;
   $sum = 1;

   $num++;
   $sum++;
   echo $num, "\n";
   echo $sum, "\n";
}
staticvar();
staticvar();
staticvar();

$a = "Kaushik";
$$a = "Yadav";
echo $Kaushik; //Variable variables
?>