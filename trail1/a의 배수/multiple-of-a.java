import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin = new Scanner(System.in);

        int n=scin.nextInt();
        int a=scin.nextInt();

        int i=1;

        while(i<=n){
            if(i%a==0){
                System.out.println(1);
            }
            else System.out.println(0);
            i++;
        }
    }
}