import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin=new Scanner(System.in);

        int a=scin.nextInt();
        int b=scin.nextInt();

        for(int i=a;i<=b;){

            System.out.print(i+" ");
            if(i%2==1){
                i*=2;
            }
            else{
                i+=3;
            }
        }
    }
}