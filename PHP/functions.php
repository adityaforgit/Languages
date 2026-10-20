<?php
//User - Defined function
function add($a,$b) {
    $sum = $a + $b;
    return $sum;
}
echo add(5,10),"\n";
//Built in functions
$str = "Kaushik Yadav";
echo strlen($str),"\n";
echo sqrt(25);

/*List of functions:   
Function	    Syntax	       Purpose
--------        ------         -------
strlen()	 strlen($string)	Returns string length
strtoupper()	strtoupper($string)	Converts to uppercase
strtolower()	strtolower($string)	Converts to lowercase
ucfirst()	ucfirst($string)	Uppercases first character
ucwords()	ucwords($string)	Uppercases first character of each word
str_replace()	str_replace($search, $replace, $string)	Replaces text
substr()	substr($string, $start, $length)	Extracts part of a string
strpos()	strpos($string, $search)	Finds position of text
strrev()	strrev($string)	Reverses a string
trim()	trim($string)	Removes whitespace from both ends
ltrim()	ltrim($string)	Removes whitespace from left
rtrim()	rtrim($string)	Removes whitespace from right
strcmp()	strcmp($string1, $string2)	Compares two strings
str_repeat()	str_repeat($string, $times)	Repeats a string
str_split()	str_split($string, $length)	Converts string into an array
explode()	explode($separator, $string)	Converts string into an array
implode()	implode($separator, $array)	Converts array into a string*/

//Passing by Refernce:
function addbyref(&$x,$y) {
    $x = $x + $y;
}
$a = 5;
addbyref($a,3);
echo $a;
?>