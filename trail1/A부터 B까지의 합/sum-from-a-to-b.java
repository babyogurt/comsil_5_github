import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin=new Scanner(System.in);
        int a=scin.nextInt();
        int b=scin.nextInt();

        int sum=0;

        for(int i=a;i<=b;i++){
            sum+=i;
        }

        System.out.print(sum);
    }
}