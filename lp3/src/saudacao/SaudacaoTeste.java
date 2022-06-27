package decomp.ic805.saudacao;

import javax.swing.JOptionPane;

public class SaudacaoTeste {
	public static void main (String[] args){
		String nome = JOptionPane.showInputDialog(null, "Escreva seu nome");
		JOptionPane.showMessageDialog(null, "Oi, " + nome);
	}

}
