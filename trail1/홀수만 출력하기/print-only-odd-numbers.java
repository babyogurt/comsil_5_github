import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin=new Scanner(System.in);

        int n=scin.nextInt();

        for(int i=0;i<n;i++){
            int a=scin.nextInt();

            if(a%2==1 && a%3==0) System.out.println(a);
        }
    }
}