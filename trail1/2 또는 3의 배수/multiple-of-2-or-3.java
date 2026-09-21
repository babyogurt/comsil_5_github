import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner scin = new Scanner(System.in);

        int n=scin.nextInt();

        for(int i=1;i<=n;i++){
            if(i%2==0 || i%3==0){
                System.out.print(1+" ");
            }
            else System.out.print(0+" ");
        }
    }
}