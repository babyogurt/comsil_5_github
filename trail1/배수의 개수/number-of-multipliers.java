import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin = new Scanner(System.in);

        int c=0,t=0;

        for(int i=0;i<10;i++){
            int a=scin.nextInt();

            if(a%3==0) c++;
            if(a%5==0) t++;
        }

        System.out.print(c+" "+t);
    }
}