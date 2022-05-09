package chiscoj.com;

import java.util.Scanner;

//0指石頭.2指剪刀.5指布

public class a008_WA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int F, N, Pre = -1;
        int I = 0;
        int Game = 0; //-1 LOSE 0 DREW 1 WON
        String A="A";
        int f[] = new int[11];
        F = sc.nextInt();
        N = sc.nextInt();
        for (int i = 0; i < N; i++) {
            f[i] = sc.nextInt();
        }
        for (int i = 0; i < N; i++) {
            System.out.printf("%d ", F);
            if (F == 0 && f[i] == 2 || F == 2 && f[i] == 5 || F == 5 && f[i] == 0) {
                Game = -1;
                I=i;
                break;
            } else if (F == 2 && f[i] == 0 || F == 5 && f[i] == 2 || F == 0 || f[i] == 5) {
                Game = 1;
                I=i;
                break;
            }
//如果絲絲連續兩輪出了一樣的拳，下一輪他就會出可以打敗絲絲前兩輪的拳。
//否則，他下一輪會出跟絲絲前一輪一樣的拳。
            if (Pre == f[i]) {
                switch (i) {
                    case 0:
                        F = 5;
                        break;
                    case 2:
                        F = 0;
                        break;
                    case 5:
                        F = 2;
                        break;
                }
            }
            Pre = f[i];
            I=i;
            }
        switch (Game){
            case -1:
                A = "Lost";
                break;
            case 0:
                A = "Drew";
                I=I-1;
                break;
            case 1:
                A = "Won";
                break;
        }
        System.out.printf(": %s at round %d",A , I+1);
    }
}