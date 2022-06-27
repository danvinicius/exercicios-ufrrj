package decomp.ic805.dado;

import javax.swing.JOptionPane;

public class DadoTeste {
   public static void main (String[] args){
	boolean acertou = false;
		
	while (acertou == false){
	   String chuteS = JOptionPane.showInputDialog
			   (null, "Chute o num dos pontos" + "\n" + "no arremesso do dado");
	   int chute = Integer.parseInt(chuteS);
			
	   int dado = 1 + (int) (Math.random()*6) ;
			
	   JOptionPane.showMessageDialog(null, chute==dado);
			
	   if (chute==dado)
	      acertou = true;
      }
   }
}
