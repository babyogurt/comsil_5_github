import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin=new Scanner(System.in);

        int n=scin.nextInt();

        int cnt=0;

        for(int i=1;i<=n;i++){
            if(i%100==0 && i%400!=0){
                continue;
            }
            else if(i%4==0) cnt++;
        }

        System.out.print(cnt);
    }
}