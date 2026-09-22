import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner scin=new Scanner(System.in);

        int cnt=0;

        for(int i=0;i<5;i++){
            int a=scin.nextInt();

            if(a%2==0) cnt++;
        }

        System.out.print(cnt);
    }
}