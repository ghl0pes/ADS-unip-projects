package Lista02;

public class Euro {
    public double euroValueByReal = 5.68;
    public static double convertRealToEuro(double realQuantity) {
        return realQuantity * (new Euro()).euroValueByReal;
    }
}