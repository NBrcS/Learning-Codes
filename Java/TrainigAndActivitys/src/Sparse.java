public class Sparse extends Main{

    public static boolean IsSparse(int Ar[][], int lines, int column){
        int ElementsCount = 0;
        int ZeroCount = 0;

        for(int i = 0; i < lines; i++){
            for(int j = 0; j < column; j++){
                if(Ar[i][j] == 0) ZeroCount++;
                ElementsCount++;
            }
        }

        if((1.0*ZeroCount / ElementsCount) > 0.7) return true;
        else return false;
    }

    public static void SparseCheck(){
        int lines, columns;

        System.out.printf("Type it here the Lines number: ");
        lines = scanner.nextInt();

        System.out.printf("Type it here the columns number: ");
        columns = scanner.nextInt();

        int[][] Ar = new int[lines][columns];

        for(int i = 0; i < lines; i++){
            for(int j = 0; j < columns; j++){
                System.out.printf("Type it here the value of Array [ " + i + " ][ " + j + " ]: " );
                Ar[i][j] = scanner.nextInt();
            }
        }

        if(IsSparse(Ar,lines, columns)) System.out.println("Is sparse");
        else System.out.println("Isn`t Sparse");
    }
}

















