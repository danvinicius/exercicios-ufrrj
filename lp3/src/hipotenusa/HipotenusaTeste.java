package decomp.ic805.hipotenusa;

import javax.swing.JOptionPane;

public class HipotenusaTeste {
   public static void main (String[] args){

	String cateto1S = JOptionPane.showInputDialog(null, "Cateto1:");
	double cateto1 = Double.parseDouble(cateto1S);
			
	String cateto2S = JOptionPane.showInputDialog(null, "Cateto2:");
	double cateto2 = Double.parseDouble(cateto2S);
			
	double hipotenusa = Math.sqrt(Math.pow(cateto1, 2) + Math.pow(cateto2, 2));
			
	JOptionPane.showMessageDialog(null, "Hipotenusa = " + hipotenusa);
	 
   }
}

