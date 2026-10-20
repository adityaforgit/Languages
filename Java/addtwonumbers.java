import java.util.Scanner;
class addtwonumbers {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
int num1,num2,sum;
System.out.println("Enter 1st number: ");
num1 = sc.nextInt();
System.out.println("Enter second number ");
num2 = sc.nextInt();
sum = num1 + num2;
System.out.println("The required  sum is:"+sum);
} 
}