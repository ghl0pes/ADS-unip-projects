import javax.swing.JOptionPane;

public class SomaJanela {
	public static void main (String[] args) {
		int numero1 = 10;
		int numero2 = 20;
		
		JOptionPane.showMessageDialog(null, 
			"A soma dos numeros eh: " + (numero1 + numero2), 
			"Soma",
			JOptionPane.INFORMATION_MESSAGE
		);
		
		JOptionPane.showMessageDialog(null, 
			"A soma dos numeros eh: " + (numero1 + numero2), 
			"Soma",
			JOptionPane.ERROR_MESSAGE
		);
		
		JOptionPane.showMessageDialog(null, 
			"A soma dos numeros eh: " + (numero1 + numero2), 
			"Soma",
			JOptionPane.WARNING_MESSAGE
		);
	}
}
