import java.util.Scanner;

class EVM extends Main {

    private String Name;
    private int Code;

    public static void EVM() {
        boolean validation;
        int vote, WinIndex, N;
        int totalVotes = 0, Null = 0;

        System.out.printf("Type it the number of candidates: ");
        N = scanner.nextInt();

        EVM[] candidates = new EVM[N];
        int[] votes = new int[N];

        for (int i = 0; i < N; i++) {
            candidates[i] = new EVM();

            System.out.printf("Type it the code of this candidate: ");
            candidates[i].Code = scanner.nextInt();
            clearBuffer(scanner);

            System.out.printf("Type it the name of this candidate: ");
            candidates[i].Name = scanner.nextLine();
        }

        do {
            validation = false;
            vote = scanner.nextInt();

            if(vote < 0) break;

            for (int i = 0; i < N; i++) {
                if (vote == candidates[i].Code) {
                    votes[i]++;
                    validation = true;
                }
            }

            if (!validation) Null++;

            totalVotes++;
        }while (vote > 0);

        WinIndex = Winner(votes, N);

        for(int i = 0; i < N; i++){
            if(i == WinIndex){
                System.out.println(100*(1.0*votes[i]/totalVotes) + " - " + candidates[i].Code + " - " + candidates[i].Name + " WINNER");
            }
            else{
                System.out.println(100*(1.0 * votes[i] / totalVotes) + " - " + candidates[i].Code + " - " + candidates[i].Name);
            }
        }
        System.out.println(100*(1.0*Null/totalVotes) + " - NULL VOTES");
    }

    private static int Winner(int Ar[], int Number){
        int index = 0;
        int Larger = 0;

        for(int i = 0; i < Number; i++){
            if(Ar[i] > Larger) {
                index = i;
                Larger = Ar[i];
            }
        }

        return index;
    }


    private static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }
}
