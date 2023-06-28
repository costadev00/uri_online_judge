import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[][] mat = new int[n][n];
        boolean flag = true;
        int num = 0;
        Set<Integer> set = new HashSet<>();

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                mat[i][j] = scanner.nextInt();
                sum += mat[i][j];
                set.add(mat[i][j]);
            }
            if (i == 0)
                num = sum;
            if (sum != num)
                flag = false;
        }

        // Check if the numbers are unique
        if (set.size() != n * n)
            flag = false;

        // Check diagonal
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mat[i][i];
        }
        if (sum != num)
            flag = false;

        // Check the other diagonal
        sum = 0;
        for (int i = 0; i < n; i++) {
            sum += mat[i][n - i - 1];
        }
        if (sum != num)
            flag = false;

        // Check columns
        for (int i = 0; i < n; i++) {
            sum = 0;
            for (int j = 0; j < n; j++) {
                sum += mat[j][i];
            }
            if (sum != num)
                flag = false;
        }

        if (!flag)
            System.out.println(0);
        else
            System.out.println(num);
    }
}
