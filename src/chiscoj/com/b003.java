package chiscoj.com;

import java.util.Scanner;

public class b003 {
			public static void main(String[] args) {
				Scanner sc = new Scanner(System.in);
				int time , timeSec , timeHr , timeMin;
				time = sc.nextInt();
				
				timeMin = time / 60 ;
				timeSec = time % 60 ;
				timeHr  = timeMin / 60 ;
				timeMin = timeMin % 60 ;
				
				System.out.printf("%d hr %d min %d sec",
						timeHr , timeMin, timeSec);
				
			}
}
