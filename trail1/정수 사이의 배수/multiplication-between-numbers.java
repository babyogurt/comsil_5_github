import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.

        Scanner scin=new Scanner(System.in);

        int a=scin.nextInt();
        int b=scin.nextInt();


        int cnt=0;
        int sum=0;

        for(int i=a;i<=b;i++){
            if(i%5==0 || i%7==0){
                cnt++;
                sum+=i;
            }
        }

        System.out.printf("%d %.1f",sum,(double)sum/cnt);
    }
}