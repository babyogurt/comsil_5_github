import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner scin=new Scanner(System.in);

        int k=0;

        for(int i=0;i<10;i++){
            int a=scin.nextInt();
            if(a%2==1) k++;
        }

        System.out.print(k);
    }
}