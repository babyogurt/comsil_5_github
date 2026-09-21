import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin = new Scanner(System.in);

        int a=scin.nextInt();
        int b=scin.nextInt();

        if(a>0){
            for(int i=0;i<b;i++){
                System.out.print(a);
            }
        }
        else System.out.print(0);
    }
}