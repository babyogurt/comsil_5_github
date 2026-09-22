import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin=new Scanner(System.in);
        int n=scin.nextInt();

        int a=0,b=0,c=0;

        for(int i=1;i<=n;i++){
            if(i%12==0) c++;
            else if(i%3==0) b++;
            else if(i%2==0) a++;
        }

        System.out.print(a+" "+b+" "+c);
    }
}