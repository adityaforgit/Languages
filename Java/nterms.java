import java.util.Scanner;
class nterms {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
int n;
System.out.println("Enter number of terms: ");
n = sc.nextInt();
int sum = 0;
for(int i = 0; i<=n; i++) {
if (i%2 == 0) 
sum -= i;
else
sum += i;
}
System.out.println("Sum = " + sum);
}
}