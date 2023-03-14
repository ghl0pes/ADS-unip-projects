import java.util.Scanner;

public class MinutesConversion {
    int minutesInHour = 60;
    int minutesByDay = minutesInHour * 24;

    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        MinutesConversion thisClass = new MinutesConversion();

        System.out.println("Digite a quantidade de minutos a ser calculado: ");

        int minutes = sc.nextInt();

        int hoursByMinutes = thisClass.countHoursByMinutes(minutes);

        int daysByMinutes = thisClass.countDaysByMinutes(minutes);

        System.out.println("Horas inteiras: " + hoursByMinutes);
        System.out.println("Dias inteiraos: " + daysByMinutes);
    }

    private static int countHoursByMinutes (int minutes) {
        MinutesConversion thisClass = new MinutesConversion();

        return minutes / thisClass.minutesInHour;
    }

    private static int countDaysByMinutes (int minutes) {
        return minutes / (new MinutesConversion()).minutesByDay;
    }
}