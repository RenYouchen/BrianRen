package Learn_Test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class sort {
    public static void main(String[] args) {
        int [] arr = new int[3];
        arr[0]=10;
        arr[1]=40;
        arr[2]=1;
        Arrays.sort(arr);
        //排序
        for (int i = 0; i < 3; i++) {
            System.out.println(arr[i]);
        }
    }
}
