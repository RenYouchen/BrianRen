package chiscoj.com;

import java.util.Scanner;

public class b014 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N;
		int[] arr = new int[100];
		N = sc.nextInt();
		for (int i = 0 ; i < N ; i++) {
			arr[i] = sc.nextInt();
		}
		for (int i = N-1 ; i >= 0 ; --i) {
			System.out.println(arr[i]);
		}
	}
}
